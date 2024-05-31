#ifndef MYQUEUE_H
#define MYQUEUE_H
#include "BaseArray.h"

class MyQueue:public BaseArray{
  int tail;
  int head;
  int tos;
public:
  MyQueue(int capSize);
  void enqueue(int x);
  int dequeue();
  int length();
};

#endif