#include "Stack.h"
Stack::Stack():top(-1) {}

bool Stack::Push(int e) { 
	bool success = false;
	if (!IsFull()) {
		data[++top] = e;
		success = true;
	}
	return success; 
}


bool Stack::Pop(int& e) {
	bool success = false;
	if (!IsEmpty()) {
		e = data[top--];
		success = true;
	}
	return success;
}

bool Stack::IsFull()const { 
	return top == MAX - 1;
	/*
	bool full = false;
	if (top == MAX - 1)
		full = true;
	return full;
	*/
}


bool Stack::IsEmpty()const {
	return top == -1;
}

void Stack::Print()const {
	cout << endl;
	for (int i = top; i >= 0; i--)
		cout << data[i] << endl;
	cout << "______" << endl;
}


bool Stack::Peek(int& e)const {
	bool success = false;
	if (!IsEmpty()) {
		e = data[top];
		success = true;
	}
	return success;
}