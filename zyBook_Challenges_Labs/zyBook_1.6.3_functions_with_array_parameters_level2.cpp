//************************************
// Name: Devin Kennedy
// Date: 1/13/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_1.6.3_functions_with_array_parameters_level2.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Eight integers are read from input and stored into the array numberArray.
 * Then, integer numVals is read from input. Write a function
 * AddIndexToElements() that takes an integer array parameter and an integer
 * parameter for numVals, and replaces the first numVals elements with the sum
 * of the element and the element's index.
 *
 * Ex: If the input is:
 * 140 125 65 165 60 50 195 35
 * 8
 *
 * then the output is:
 * Original array: 140 125 65 165 60 50 195 35
 * Changed array: 140 126 67 168 64 55 201 42
 */
//************************************

#include <iostream>
using namespace std;

void AddIndexToElements(int arrayInput[], int sizeOfArray) {
   // Modified portion of code
   for (int i=0; i<sizeOfArray; i++) {
      arrayInput[i] += i;
   }
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
   const int NUM_ELEMENTS = 8;
   int numberArray[NUM_ELEMENTS];
   int i;
   int numVals;
   
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      cin >> numberArray[i];
   }
   
   cin >> numVals;
   
   cout << "Original array: ";
   PrintArr(numberArray, NUM_ELEMENTS);
   
   AddIndexToElements(numberArray, numVals);
   
   cout << "Changed array: ";
   PrintArr(numberArray, NUM_ELEMENTS);
   
   return 0;
}