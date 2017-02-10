// threadtest.cc 
//	Simple test case for the threads assignment.
//
//	Create two threads, and have them context switch
//	back and forth between themselves by calling Thread::Yield, 
//	to illustratethe inner workings of the thread system.
//
// Copyright (c) 1992-1993 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation 
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "system.h"
//#include "synch.h"

//----------------------------------------------------------------------
// SimpleThread
// 	Loop 5 times, yielding the CPU to another ready thread 
//	each iteration.
//
//	"which" is simply a number identifying the thread, for debugging
//	purposes.
//----------------------------------------------------------------------

void
SimpleThread (int which)
{
    int num;
    
    for (num = 0; num < 5; num++) {
	printf("*** Thread SimpleThread %d looped %d times\n", which, num);
        currentThread->Yield();
    }
}

void 
HelloThread (int which)
{
int num;
    for (num = 0; num < 5; num++) {
	printf("Thread Hello %d looped %d times\n", which, num);
        currentThread->Yield();
}

}

//----------------------------------------------------------------------
// ThreadTest
//----------------------------------------------------------------------

void
ThreadTest()
{
    DEBUG('t', "Entering SimpleTest");

    Thread *t = new Thread("SimpleThread");
    t->Fork(SimpleThread, 1);

// create two HelloThread threads here.
    HelloThread(1);
    HelloThread(2);
    
    SimpleThread(0);
    HelloThread(0);
}
