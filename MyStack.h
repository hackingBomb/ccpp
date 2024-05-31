#ifndef MYSTACK_H
#define MYSTACK_H
#include "BaseArray.h"

class MyStack : public BaseArray{
int tos;
public:
  MyStack(int capSize);
  void push(int n);
  int pop();
  int length();
};

#endif