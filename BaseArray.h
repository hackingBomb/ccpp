#ifndef BASEARRAY_H
#define BASEARRAY_H
#include <iostream>
using namespace std;

class BaseArray{
  int *arr;
  int capSize;
public:
  BaseArray(int capSize);
  virtual ~BaseArray(){
    delete []arr;
  }
  int capacity();
  void put(int index, int n);
  int get(int index);
  void upCapacity(int* arr, int n);
  int* getArray();

};

#endif