#include "BaseArray.h"
#include <iostream>
using namespace std;

BaseArray::BaseArray(int capSize){
  this -> capSize = capSize;
  arr = new int [capSize];
}
int BaseArray::capacity(){
  return capSize;
}
void BaseArray::put(int index, int n){
  arr[index] = n;
}
int BaseArray::get(int index){
  return arr[index];
}
void BaseArray::upCapacity(int *arr, int n){
  int * twiceArray = new int[n*2];
  for(int i=0; i<n; i++){
    twiceArray[i] = arr[i];
  }
  arr=twiceArray;
}

int* BaseArray::getArray(){
  return arr;
}
