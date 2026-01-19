#include <iostream>
using namespace std;

void PrintArr(double ar[], int size);

int main() {
	int i1 = 6;
	int* ptr1 = nullptr;
	ptr1 = &i1;

	cout << "sizeof(int): " << sizeof(int) << endl;
	cout << "sizeof(int*): " << sizeof(int*) << endl;

	cout << "i1: " << i1 << endl; // 6
	cout << "&i1: " << &i1 << endl; // &i1
	cout << "*ptr1: " << (*ptr1) << endl; // 6
	cout << "ptr1: " << (ptr1) << endl; // &i1

	i1 = 100;
	cout << "i1: " << i1 << endl; // 100
	cout << "&i1: " << &i1 << endl; // &i1
	cout << "*ptr1: " << (*ptr1) << endl; // 100
	cout << "ptr1: " << (ptr1) << endl; // &i1

	*ptr1 = 555;
	cout << "i1: " << i1 << endl; // 555
	cout << "&i1: " << &i1 << endl; // &i1
	cout << "*ptr1: " << (*ptr1) << endl; // 555
	cout << "ptr1: " << (ptr1) << endl; // &i1

	cout << endl << endl;

	double i2 = 3.5;
	double* ptr2 = &i2;
	cout << "i2: " << i2 << endl; // 3.5
	cout << "&i2: " << &i2 << endl; // &i2
	cout << "ptr2: " << ptr2 << endl; // &i2
	cout << "*ptr2: " << *ptr2 << endl; // 3.5

	*ptr2 *= 3;
	cout << i2 << endl; // 10.5
	*ptr2 += *ptr1;
	cout << *ptr2 << endl; // 565.5

	cout << endl << endl;

	double ar[5] = { 11.1, 22.2, 33.3, 44.4, 55.5 };
	PrintArr(ar, 5);
	*(ar + 3) = -44.4;
	PrintArr(ar, 5);
	return 0;
}

void PrintArr(double ar[], int size) {
	for (int i = 0; i < size; i++)
		cout << ar[i] << endl;
}
