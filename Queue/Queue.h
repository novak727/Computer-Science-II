#ifndef _QUEUE_H
#define _QUEUE_H
#include <iostream>
using namespace std;

const int MAX = 100;

class Queue {
	int data[MAX];
	int front;
	int back;
public:
	Queue();
	bool Enq(int e);
	bool Deq(int& e);
	void Print();
	bool IsFull();
	bool IsEmpty();
};

#endif