#include "DynArr.h"

void Go();

int main() {
	DynArr dlist(3);
	dlist.Insert(11);
	dlist.Insert(12);
	dlist.Insert(13);
	cout << "DLIST:" << endl;
	dlist.PrintArray(); cout << endl;

	DynArr dlist2(dlist); // copy constructor
	cout << "DLIST2:" << endl;
	dlist2.PrintArray(); cout << endl;

	DynArr dlist3(10);
	dlist3.Insert(5);
	dlist3.Insert(2);
	dlist3.Insert(15);
	cout << "DLIST3:" << endl;
	dlist3.PrintArray(); cout << endl;

	dlist = dlist3;
	cout << "new dlist: " << endl;
	dlist.PrintArray(); cout << endl;

	cout << "Calling from Go" << endl;
	Go();
	cout << "Returning from Go" << endl;

	dlist = dlist;
	dlist.PrintArray(); cout << endl;
	return 0;
}

void Go() {
	DynArr whatever(5);
	whatever.Insert(6);
	whatever.PrintArray();
}
