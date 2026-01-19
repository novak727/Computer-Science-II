#include "DynArr.h"

DynArr::DynArr(int s) {
	alloc_size = s;
	size = 0;
	data = new int[alloc_size];
}
DynArr::~DynArr() {
	cout << "DESTRUCTOR" << endl;
	delete[] data;
	data = nullptr;
	alloc_size = size = 0;
}
void DynArr::Insert(int item) {
	if (size < alloc_size)
		data[size++] = item;
}
void DynArr::PrintArray()const {
	for (int i = 0; i < size; i++)
		cout << data[i] << "\t";
}
// copy constructor
DynArr::DynArr(const DynArr& param) {
	cout << "COPY CONSTRUCTOR" << endl;
	alloc_size = param.alloc_size;
	size = param.size;
	data = new int[alloc_size];
	for (int i = 0; i < size; i++)
		data[i] = param.data[i];
}
// overloading assignment operator
DynArr& DynArr::operator=(const DynArr& param) {
	cout << "ASSIGNMENT OPERATOR" << endl;
	if (&param != this) {
		if (data != nullptr)
			delete[] data;
		alloc_size = param.alloc_size;
		size = param.size;
		data = new int[alloc_size];
		for (int i = 0; i < size; i++)
			data[i] = param.data[i];
	}
	return *this;
}