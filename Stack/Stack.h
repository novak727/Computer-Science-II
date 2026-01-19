#ifndef _STACK_H
#define _STACK_H
#include <iostream>
using namespace std;


const int MAX = 10;

class Stack {
	int top;
	int data[MAX];
public:
	Stack();
	bool Push(int e);
	bool Pop(int& e);
	bool IsFull()const;
	bool IsEmpty()const;
	void Print()const;
	bool Peek(int& e)const;

};



#endif

