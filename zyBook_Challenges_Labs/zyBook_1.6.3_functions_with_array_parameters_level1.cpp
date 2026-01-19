//************************************
// Name: Devin Kennedy
// Date: 1/13/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_1.6.3_functions_with_array_parameters_level1.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Integer numVals is read from input, representing the number of remaining
 * values in the input. Then, numVals integers are read from input and stored
 * into the array myArray. Write a function ArrayPositionSwap() that takes an
 * integer array parameter and an integer parameter for the number of elements
 * in the array, and swaps the first element with the last element of the array.
 *
 * Ex: If the input is:
 * 6
 * 150 90 35 20 145 130
 *
 * then the output is:
 * Input: 150 90 35 20 145 130
 * Output: 130 90 35 20 145 150
 */
 //************************************

#include <iostream>
using namespace std;

void ArrayPositionSwap(int inputArray[], int sizeOfArray) {
   // Modified portion of code
   int tempValue;
   tempValue = inputArray[0];
   inputArray[0] = inputArray[sizeOfArray - 1];
   inputArray[sizeOfArray - 1] = tempValue;
   // End modified portion of code
}

void PrintArr(const int arr[], int numVals) {
   int i;
   
   for (i = 0; i < numVals; ++i) {
      cout << arr[i] << " ";
   }
   
   cout << endl;
}

int main() {
   const int MAX_SIZE = 20;
   int myArray[MAX_SIZE]; // allow at most 20 elements
	int numVals;
   int i;
	
	cin >> numVals;
   
   for (i = 0; i < numVals; ++i) {
      cin >> myArray[i];
   }
   
   cout << "Input: ";
   PrintArr(myArray, numVals);
   
   ArrayPositionSwap(myArray, numVals);
   
   cout << "Output: ";
   PrintArr(myArray, numVals);
   
   return 0;
}