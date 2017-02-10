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
#include <stdio.h>

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

void
WorkerThread(Request *r1)// A thread that takes in a request pointer and just prints out the url, it simulates the server doing something with the request 
{
  char url[100] = r1->url;// url is an string that takes the url from the request r1 points to
  printf(url);// prints out url
}

void
ClientThread()// ClientThread creates a list of requests by reading in urls and passes them into server thread to be dealt with
{
  char url[100];// a strin for the urls
  int reqid;// a int to use for request id
  
  Request *r1 = new Request;// a Request pointer to store request in temporary
  List *list = new List();// a list where the request will end up in 
  FILE *fp = fopen("url.txt", "r"); // an attempt to open up url.txt
  if (!fp)// if it fails it will print out an error message
    printf(" Cannot open file url.txt!\n");
  else{
    int pos = 0;// a starting possition for the url string
    char c =getc(fp); // gets the first charater in the file
    while (c != EOF || pos == 99){// while it doesn't reach the end of the file or the last position of the string it contiues 
      if (c == '\n') { // if it reaches the end of the line it does the following
	url[pos] =' \0';//set the end of url to null charter
	r1->url = url;//set r1's url to be url 
	r1->requesterID = 1;//set r1's requester ID to be 1 
	r1->requestID = reqid;// set r1's request ID to be whatever it is currently set to
	list.SortedInsert(*r1, reqid); //add Requst to list and sorts it by request ID meaning the last one added is last on the list
	reqid ++; // increases request ID by 1
	pos = 0;// resets the position of the URL to be the first character.
	
      }
      else{
	url[pos++] = c;// otherwise it increases the position by one and make url in that posisition equal to c
      }
      fclose(fp); // close the file
      ServerThread(list); //opens up ServerThread and passes list to it 
    }
}

void
  ServerThread(List urls) // takes a list of requests seperates them into seperate requests and passes them to worker threads
{
  Request *req; // a request pointer to put the ones in the list into
  Thread *t = new Thread ("Working class threads");//a Thread that is used to fork new worker threads
  while (urls != null) //it runs while there are still elements in urls
  {   
    *req = *urls;// the request point now points to the first element in urls
    urls.remove();// it then removes the first element in urls
    t->Fork(WorkerThread, *req);// it forks a new WorkThread and passes in the the request pointer 
    currentThread->Yield(); // it then gives up the cpu so the workerthread can run using it.
  }

}

//----------------------------------------------------------------------
// ThreadTest
// 	Set up a ping-pong between two threads, by forking a thread 
//	to call SimpleThread, and then calling SimpleThread ourselves.
//----------------------------------------------------------------------

void
ThreadTest()
{
    DEBUG('t', "Entering SimpleTest");

    // Thread *t = new Thread("forked thread");

   // t->Fork(ClientThread, 1);
    ClientThread();
}

