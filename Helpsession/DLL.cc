#include "dll.h"
DoublelyLinkedList::DoublelyLinkedList(void *first){
  data = first;
  *prev = NULL;
  *next = NULL;
}

DoubleleyLinkedList::DoublelyLinkedList(void *first, DoubleleyLinkedList *last){
  data = first;
  *prev = *last;
  *next = NULL;
}

void
DoublelyLinkedList::append(void *add){
  DoubleleyLinkedList why = new DoublelyLinkedList(*add, *this);
  *next = &why;
}

void
DoublelyLinkedList::print(){
  node *print = (node *)*data;
  printf("%d  ", print->i);
  if (*next != NULL){
    next->print();
  }    
}

void
DoublelyLinkedList::deleteFirst(){
  if (*prev != null){
    prev->deleteFirst();
  }
  else{
    *next->removePrev();
    next = null;
  }
}

void
DoublelyLinkedList::removePrev();
{
  *prev = null;
}
