//************************************
// Name: Devin Kennedy
// Date: 3/12/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_4.2.1_pointers_dynamically_allocated_arrays_level3.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Integer pointer areaValues points to a dynamically allocated array with
 * numMonths + 1 elements. Deallocate the array pointed to by areaValues.
 */
//************************************

#include <iostream>
using namespace std;

void PrintAreaChanges(int* arrayPtr, int arraySize) {
   int i;
	int change;

   if (arrayPtr != nullptr) {
		cout << "Initial area: " << arrayPtr[0] << endl;
      for (i = 1; i < arraySize; ++i) {
         change = arrayPtr[i] - arrayPtr[i - 1];
			cout << "Area change after month " << i << ": " << change << endl;
      }
   }
}

int main() {
   int* areaValues = nullptr;
   int numMonths;
   int i;

   cin >> numMonths;

   areaValues = new int[numMonths + 1];

   for (i = 0; i < numMonths + 1; ++i) {
      cin >> areaValues[i];
   }

   PrintAreaChanges(areaValues, numMonths + 1);

   // Modified portion of code
   delete[] areaValues;
   // End modified portion of code

   return 0;
}