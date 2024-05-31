#include "MyStack.h"
#include "BaseArray.h"
#include <iostream>
using namespace std;

MyStack::MyStack(int capSize) : BaseArray(capSize) { tos = 0; }
void MyStack::push(int n) {
  if (tos == capacity()) {
    cout << "스택 꽉 참! 용량을 2배로 늘립니다." << endl;
    upCapacity(getArray(), tos);
  }
  put(tos++, n);
}
int MyStack::pop() {
  if (tos == 0)
    return -1;
  return get(--tos);
}
int MyStack::length() { return tos; }
