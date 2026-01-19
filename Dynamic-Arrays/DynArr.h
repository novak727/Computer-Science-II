#ifndef _DYNARR_H
#define _DYNARR_H

#include <iostream>
using namespace std;

class DynArr {
	int* data;
	int alloc_size;
	int size;
public:
	DynArr(int s);
	DynArr(const DynArr& param); // copy constructor
	DynArr& operator=(const DynArr& param); // overloading assignment operator
	~DynArr(); // destructor
	void Insert(int item);
	void PrintArray()const;

};

#endif