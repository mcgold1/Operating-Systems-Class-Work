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
#include "request.h"
#include "list.h"
#include "synch.h"
#include <stdio.h>
#include <stdlib.h>

FILE *fp = fopen("url.txt", "r"); // an attempt to open up url.txt
Semaphore mutex("mutex", 1); //a Semaphore for mutual exclution to critical regions
Semaphore listcount("listcount", 0); // a Synching Semaphore it holds how many items are in the list
Semaphore empty("empty", 10); // another Synching Semaphore it "Shows" how many spots are avable on the list
List *list = new List();// a list where the request will end up in 

//----------------------------------------------------------------------
// SimpleThread
// 	Loop 5 times, yielding the CPU to another ready thread 
//	each iteration.
//
//	"which" is simply a number identifying the thread, for debugging
//	purposes.
//----------------------------------------------------------------------

void
SimpleThread(int which)
{
    int num;
    
    for (num = 0; num < 5; num++) {
	printf("*** thread %d looped %d times\n", which, num);
        currentThread->Yield();
    }
    printf("Hello World!");
}
void ServerThread(int c);

void
WorkerThread(int c)// A thread that takes in a request pointer and just prints out the url, it simulates the server doing something with the request 
{
  Request *r1;
  r1 =(Request *)c;
  char url[100];
  char *a;
  for(int i = 0; i < rand()%10000+999999, i++); // a random delay to allow for interupts There are a few of these spaced throuhout the code
  mutex.P(); // makes sure no other WorkerThread can print in the middle of this one printing
  for (int i = 0; i < 100; i++)
  {
    url[i] = r1->url[i];
    *a = url[i];
    printf(a);
  }
  mutex.V();
  printf(url);// prints out url
  printf("/n");
}

void
ClientThread(int d)// ClientThread creates a list of requests by reading in urls and passes them into server thread to be dealt with
{
  //printf("this is the start");
  char url[100];// a strin for the urls
  int reqid;// a int to use for request id
  
  Request *r1 = new Request();// a Request pointer to store request in temporary
  for(int i = 0; i < rand()%10000+999999, i++);
  if (!fp)// if it fails it will print out an error message
    printf(" Cannot open file url.txt!\n");
  else{
    int pos = 0;// a starting possition for the url string
    mutex.P(); // while this client thread is readin from the file it lets nothing else do this
    char c =getc(fp); // gets the first charater in the file
    while (c != EOF || pos == 99){// while it doesn't reach the end of the file or the last position of the string it contiues 
      if (c == '\n') { // if it reaches the end of the line it does the following
	mutex.V(); // at this point it has read one url in so it lets another clientThread run
	url[pos] =' \0';//set the end of url to null charter
	//Request *r2 = new Request(url, reqid, 1);
	for (int i = 0; i < 100; i++){
	  r1->url[i] = url[i];}//set r1's url to be url
	//memcpy(r1->url, url, 100);
	r1->requesterID = 1;//set r1's requester ID to be 1 
	r1->requestID = reqid;// set r1's request ID to be whatever it is currently set to
        mutex.P();// since it's accessing the list it's not allowing anything to run. probably not nessary as it's one line, but better safe than sorry,
	list->SortedInsert(r1, reqid); //add Requst to list and sorts it by request ID meaning the last one added is last on the list
	listcount.V(); // lets Server know another request is ready     
	mutex.V();
	empty.P(); // makes sure there's space in the buffer
	reqid ++; // increases request ID by 1
	for(int i = 0; i < rand()%10000+999999, i++);
	pos = 0;// resets the position of the URL to be the first character.
	mutex.P();
      }
      else{
	url[pos++] = c;// otherwise it increases the position by one and make url in that posisition equal to c
      }
      c = getc(fp);
      fclose(fp); // close the file
      ServerThread(2); //opens up ServerThread and passes list to it 
    }
  }
}

void
ServerThread(int c) // takes a list of requests seperates them into seperate requests and passes them to worker threads
{
  printf("let's server");
  Request *req; // a request pointer to put the ones in the list into
  Thread *t = new Thread ("Working class threads");//a Thread that is used to fork new worker threads
  while (list != NULL) //it runs while there are still elements in urls
  {
    for(int i = 0; i < rand()%10000+999999, i++);
    listcount.P();  // checks to see if there's any requests on the list 
    int i = (int)list; // takes the first address pointer and turns into an int so it can be turned into a Request pointer and be used as such
    req = (Request *)i;// the request point now points to the first element in urls
    list->Remove();// it then removes the first element in urls
    for(int i = 0; i < rand()%10000+999999, i++);
    t->Fork(WorkerThread,(int) req);// it forks a new WorkThread and passes in the the request pointer 
    currentThread->Yield(); // it then gives up the cpu so the workerthread can run using it.
    WorkerThread((int) req); // creates a WorkerThread with an int that is the address of a request
    empty.V(); // lets Client thread knows there's more room in the buffer
    }

}

//----------------------------------------------------------------------
// ThreadTest
// 	Set up a ping-pong between two threads, by forking a thread 
//	to call SimpleThread, and then calling SimpleThread ourselves.
//----------------------------------------------------------------------

void
ThreadTest() // creates and adds to the readyque 2 different ClientThreads and one server thread
{
    DEBUG('t', "Entering SimpleTest");

     Thread *t = new Thread("forked thread");

    t->Fork(ClientThread, 1);
    Thread *t1 = new Thread("client2");
    t1->Fork(ClientThread, 2);
    Thread *t2 = new Thread("severtheread");
    t2->Fork(SeverThread, 1);
}

