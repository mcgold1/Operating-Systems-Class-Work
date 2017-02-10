// addrspace.cc 
//	Routines to manage address spaces (executing user programs).
//
//	In order to run a user program, you must:
//
//	1. link with the -N -T 0 option 
//	2. run coff2noff to convert the object file to Nachos format
//		(Nachos object code format is essentially just a simpler
//		version of the UNIX executable object code format)
//	3. load the NOFF file into the Nachos file system
//		(if you haven't implemented the file system yet, you
//		don't need to do this last step)
//
// Copyright (c) 1992-1993 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation 
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "system.h"
#include "addrspace.h"
#include "noff.h"

BitMap *AddrSpace::bitty = new BitMap(NumPhysPages);

//----------------------------------------------------------------------
// SwapHeader
// 	Do little endian to big endian conversion on the bytes in the 
//	object file header, in case the file was generated on a little
//	endian machine, and we're now running on a big endian machine.
//----------------------------------------------------------------------

static void 
SwapHeader (NoffHeader *noffH)
{
	noffH->noffMagic = WordToHost(noffH->noffMagic);
	noffH->code.size = WordToHost(noffH->code.size);
	noffH->code.virtualAddr = WordToHost(noffH->code.virtualAddr);
	noffH->code.inFileAddr = WordToHost(noffH->code.inFileAddr);
	noffH->initData.size = WordToHost(noffH->initData.size);
	noffH->initData.virtualAddr = WordToHost(noffH->initData.virtualAddr);
	noffH->initData.inFileAddr = WordToHost(noffH->initData.inFileAddr);
	noffH->uninitData.size = WordToHost(noffH->uninitData.size);
	noffH->uninitData.virtualAddr = WordToHost(noffH->uninitData.virtualAddr);
	noffH->uninitData.inFileAddr = WordToHost(noffH->uninitData.inFileAddr);
}

//----------------------------------------------------------------------
// AddrSpace::AddrSpace
// 	Create an address space to run a user program.
//	Load the program from a file "executable", and set everything
//	up so that we can start executing user instructions.
//
//	Assumes that the object code file is in NOFF format.
//
//	First, set up the translation from program memory to physical 
//	memory.  For now, this is really simple (1:1), since we are
//	only uniprogramming, and we have a single unsegmented page table
//
//	"executable" is the file containing the object code to load into memory
//----------------------------------------------------------------------

AddrSpace::AddrSpace(OpenFile *executable)
{
    NoffHeader noffH;
    unsigned int i, size;
    int freePhys;

    executable->ReadAt((char *)&noffH, sizeof(noffH), 0);
    if ((noffH.noffMagic != NOFFMAGIC) && 
		(WordToHost(noffH.noffMagic) == NOFFMAGIC))
    	SwapHeader(&noffH);
    ASSERT(noffH.noffMagic == NOFFMAGIC);

// how big is address space?
    size = noffH.code.size + noffH.initData.size + noffH.uninitData.size 
			+ UserStackSize;	// we need to increase the size
						// to leave room for the stack
    numPages = divRoundUp(size, PageSize);
    size = numPages * PageSize;

    ASSERT(numPages <= NumPhysPages);		// check we're not trying
						// to run anything too big --
						// at least until we have
                                                // virtual memory

    DEBUG('a', "Initializing address space, num pages %d, size %d\n", 
					numPages, size);

    while(bitty->NumClear() < numPages) //catches Threads in a Yield loop if not enough space is alviable for them
      {
	currentThread->Yield();
      }
// first, set up the translation 
    pageTable = new TranslationEntry[numPages];
    for (i = 0; i < numPages; i++) {
	pageTable[i].virtualPage = i;  
	freePhys = bitty->Find(); // finds the next open physical page then sets the physicalPage in the pageTable to that and the corrispoding space in the "RAM" to be zeros
	if (freePhys > -1){
	  pageTable[i].physicalPage = freePhys;
	  memset(machine->mainMemory + PageSize*freePhys, 0, PageSize);
	}
	pageTable[i].valid = TRUE;
	pageTable[i].use = FALSE;
	pageTable[i].dirty = FALSE;
	pageTable[i].readOnly = FALSE;  // if the code segment was entirely on 
					// a separate page, we could set its 
					// pages to be read-only
	//memset(machine->mainMemory + PageSize*freePhys, 0, PageSize);
    }
    
// zero out the entire address space, to zero the unitialized data segment 
// and the stack segment
//    bzero(machine->mainMemory, size); rm for Solaris
//      memset(machine->mainMemory, 0, size);

// then, copy in the code and data segments into memory
    int codeLeft = noffH.code.size;
    int leftOff = -1;
    if (noffH.code.size > 0) { //if there's code set it
        DEBUG('a', "Initializing code segment, at 0x%x, size %d\n", 
			noffH.code.virtualAddr, noffH.code.size);
	for (i = 0; i < divRoundUp(noffH.code.size, PageSize); i++){ //run through the number of vertial pages there are and makes it excutable, after words it stores where it's left off
	  if(codeLeft >= PageSize){  // the most common case, more codeLeft than a page size or more, it loads in a page at the right physical page and then decrements the codeLeft by PageSize
	    executable->ReadAt(&(machine->mainMemory[pageTable[i].physicalPage * PageSize]),                                                                                                                                                                                                  PageSize, noffH.code.inFileAddr+ i*PageSize);
	    codeLeft -= PageSize;  
	  }
	  else if (codeLeft == 0){}
	  else{ // if there's less codeleft than a page just load in that much page
	    executable->ReadAt(&(machine->mainMemory[pageTable[i].physicalPage * PageSize]),                                                                                                                                                                                 
			       codeLeft, noffH.code.inFileAddr+ i*PageSize);
	  }
	  leftOff = i;
	}
	//executable->ReadAt(&(machine->mainMemory[noffH.code.virtualAddr]),
	//		noffH.code.size, noffH.code.inFileAddr);
    }

    if (noffH.initData.size > 0) { // Load in data if it exists
        DEBUG('a', "Initializing data segment, at 0x%x, size %d\n", 
			noffH.initData.virtualAddr, noffH.initData.size);
     
	if(codeLeft > 0) // handles the case that the codesize was not evenly divisable by pagesize, after increments leftoff, resets i and make codeLeft the data left after this step
	{
	  if (noffH.initData.size >= PageSize - codeLeft) //if there's more data than just a page - the amount of code loaded into the last page it will fill up the rest of that page
	    {
	    executable->ReadAt(&(machine->mainMemory[pageTable[leftOff].physicalPage * PageSize + codeLeft]),
			       PageSize - codeLeft, noffH.initData.inFileAddr);
	  } 
	  else{ // otherwise it can just load in how much data is left
	    executable->ReadAt(&(machine->mainMemory[pageTable[leftOff].physicalPage * PageSize + codeLeft]),
			     noffH.initData.size, noffH.initData.inFileAddr);
	  }
	  
	}

	leftOff++;
	codeLeft = noffH.initData.size - codeLeft;
	i = 0;

	while (codeLeft > 0){ // if there's any data left it will run this, it works basically the same as the for loop for code, it just runs off the codeLeft
          if(codeLeft >= PageSize){
            executable->ReadAt(&(machine->mainMemory[pageTable[i+leftOff].physicalPage * PageSize]),                                                                                                                                                                                 		PageSize, noffH.code.inFileAddr+ (i+leftOff)*PageSize);
          }
          else if (codeLeft == 0){}
          else{ 
            executable->ReadAt(&(machine->mainMemory[pageTable[i+leftOff].physicalPage * PageSize]),
                               codeLeft, noffH.code.inFileAddr+ (i+leftOff)*PageSize);
          }
	  codeLeft -= PageSize;
	  i++;
        }
        

	//executable->ReadAt(&(machine->mainMemory[noffH.initData.virtualAddr]),
	//	noffH.initData.size, noffH.initData.inFileAddr);
    }

}

//----------------------------------------------------------------------
// AddrSpace::~AddrSpace
// 	Dealloate an address space.  Nothing for now!
//----------------------------------------------------------------------

AddrSpace::~AddrSpace()
{
   for(int i = 0; i < numPages; i++)
     bitty->Clear(pageTable[i].physicalPage);
   delete pageTable;
}

//----------------------------------------------------------------------
// AddrSpace::InitRegisters
// 	Set the initial values for the user-level register set.
//
// 	We write these directly into the "machine" registers, so
//	that we can immediately jump to user code.  Note that these
//	will be saved/restored into the currentThread->userRegisters
//	when this thread is context switched out.
//----------------------------------------------------------------------

void
AddrSpace::InitRegisters()
{
    int i;

    for (i = 0; i < NumTotalRegs; i++)
	machine->WriteRegister(i, 0);

    // Initial program counter -- must be location of "Start"
    machine->WriteRegister(PCReg, 0);	

    // Need to also tell MIPS where next instruction is, because
    // of branch delay possibility
    machine->WriteRegister(NextPCReg, 4);

   // Set the stack register to the end of the address space, where we
   // allocated the stack; but subtract off a bit, to make sure we don't
   // accidentally reference off the end!
    machine->WriteRegister(StackReg, numPages * PageSize - 16);
    DEBUG('a', "Initializing stack register to %d\n", numPages * PageSize - 16);
}

//----------------------------------------------------------------------
// AddrSpace::SaveState
// 	On a context switch, save any machine state, specific
//	to this address space, that needs saving.
//
//	For now, nothing!
//----------------------------------------------------------------------

void AddrSpace::SaveState() 
{}

//----------------------------------------------------------------------
// AddrSpace::RestoreState
// 	On a context switch, restore the machine state so that
//	this address space can run.
//
//      For now, tell the machine where to find the page table.
//----------------------------------------------------------------------

void AddrSpace::RestoreState() 
{
    machine->pageTable = pageTable;
    machine->pageTableSize = numPages;
}
