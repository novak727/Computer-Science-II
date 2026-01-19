//************************************
// Name: Devin Kennedy
// Date: 1/13/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_1.6.3_functions_with_array_parameters_level3.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Integer numVals is read from input, representing the number of remaining
 * values in the input. Then, numVals integers are read from input and stored
 * into the array arrToModify. Finally, integer numCompare is read from input.
 * Write a function FilterArray() that takes an integer array parameter and two
 * integer parameters, one for the number of elements in the array and the other
 * for the value to be compared. For each element in the array, if the element
 * is greater than the value compared, then replace the element with 0.
 * Otherwise, replace the element with 1.
 *
 * Ex: If the input is:
 * 5
 * 150 120 40 60 85
 * 91
 *
 * then the output is:
 * Old array: 150 120 40 60 85
 * New array: 0 0 1 1 1
 */
//************************************

#include <iostream>
using namespace std;

void FilterArray(int arrayInput[], int sizeOfArray, int compareValue) {
   // Modified portion of code
   for (int i=0; i<sizeOfArray; i++) {
      if (arrayInput[i] > compareValue)
         arrayInput[i] = 0;
      else
         arrayInput[i] = 1;
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
   const int MAX_SIZE = 20;
   int arrToModify[MAX_SIZE]; // allow at most 20 elements
   int i;
   int numCompare;
   int numVals;
   
   cin >> numVals;
   
   for (i = 0; i < numVals; ++i) {
      cin >> arrToModify[i];
   }
   
   cin >> numCompare;
   
   cout << "Old array: ";
   PrintArr(arrToModify, numVals);
   
   FilterArray(arrToModify, numVals, numCompare);
   
   cout << "New array: ";
   PrintArr(arrToModify, numVals);
   
   return 0;
}