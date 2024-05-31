#include "MyQueue.h"
#include "BaseArray.h"
#include <iostream>
using namespace std;

MyQueue::MyQueue(int capSize):BaseArray(capSize){
  head=0;
  tail=0;
  tos=0;
}
void MyQueue::enqueue(int n){
  if(head==capacity()){
    cout << "큐 꽉 참! 용량을 2배로 늘립니다." << endl;
    //upCapacity();
  }
  tos++;
  put(head++, n);
}
int MyQueue::dequeue(){
  if(tos==0) {
    return -1;
  }
  int n = get(tail++);
  --tos;
  return n;
}
int MyQueue::length(){
  return tos;
}