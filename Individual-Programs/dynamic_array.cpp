#include <iostream>
using namespace std;

void Print(int ar[], int size);
void Fill(int ar[], int size);
void Go();

int main() {
	int size;
	size = 0;
	int* ar = nullptr;
	cout << "Enter the count of the array: ";
	cin >> size;
	ar = new int[size]; // dynamically allocates size items for the array space
						// this memory is in the heap
	Fill(ar, size);
	Print(ar, size);
	delete[] ar; // dynamically deallocates the array space
	return 0;
}

void Print(int ar[], int size) {
	for (int i = 0; i < size; i++)
		cout << ar[i] << "\t";
}

void Fill(int ar[], int size) {
	cout << "Enter " << size << " values: ";
	for (int i = 0; i < size; i++)
		cin >> ar[i];
}

void Go() {
	int v1 = 6;
	int v2 = 3;
}