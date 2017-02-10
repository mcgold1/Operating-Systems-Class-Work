#ifndef DLL_h
#define DLL_h

#include "node.h"

class DoublelyLinkedList{ 
 private:
  DoublelyLinkedList *next;
  DoublelyLinkedList *prev;
  void *data;

 public:
  DoublelyLinkedList(void *first);
  DoublelyLinkedList(void *first, DoublelyLinkedList *last);
  void append(void *add);
  void print();
  void deleteFirst();
  void removePrev();
};
