#include "BaseArray.h"
#include "MyQueue.h"
#include "MyStack.h"
#include <iostream>
using namespace std;

int main() {
  MyQueue mQ(3);
  MyStack mS(3);
  int n;
  cout << "5개의 정수를 입력하라>> ";
  for (int i = 0; i < 5; i++) {
    cin >> n;
    //mQ.enqueue(n); // 큐에 삽입
    mS.push(n);
  }
  //cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length()
       //<< endl;
  cout << "스택의 용량:" << mS.capacity() << ", 스택의 크기:" << mS.length()
       << endl;
  //cout << "큐의 원소를 2개 제거하여 출력한다>> ";
  //cout << mQ.dequeue() << ' '; // 큐에서 제거하여 출력
  //cout << mQ.dequeue() << ' '; // 큐에서 제거하여 출력
  //cout << endl;
  //cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length()
    //   << endl;
  cout << "5개의 정수를 입력하라>> ";
  for (int i = 0; i < 5; i++) {
    cin >> n;
    //mQ.enqueue(n); // 큐에 삽입
    mS.push(n);
  }
  //cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length()
    //   << endl;
  //cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
  //while (mQ.length() != 0) {
    //cout << mQ.dequeue() << ' '; // 큐에서 제거하여 출력
  //}
  //cout << endl;
  //cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length()
    //   << endl;
  cout << "스택의 용량:" << mS.capacity() << ", 스택의 크기:" << mS.length()
       << endl;
  cout << "스택의 원소를 순서대로 제거하여 출력한다>> ";
  while (mS.length() != 0) {
    cout << mS.pop() << ' ';
  }
  cout << endl;
  cout << "스택의 용량:" << mS.capacity() << ", 스택의 크기:" << mS.length()
       << endl;
}
