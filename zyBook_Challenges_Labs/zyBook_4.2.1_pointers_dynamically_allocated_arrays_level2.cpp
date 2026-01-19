//************************************
// Name: Devin Kennedy
// Date: 3/12/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_4.2.1_pointers_dynamically_allocated_arrays_level2.cpp
//************************************

//************************************
// zyBook Challenge: 
/* Dynamically allocate an integer array with numSeconds + 1 elements and
 * assign areaValues with the array's address. The program will read
 * numSeconds + 1 integers into the array and then print the difference
 * between each pair of adjacent values.
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
			cout << "Area change after second " << i << ": " << change << endl;
      }
   }
}

int main() {
   int* areaValues = nullptr;
   int numSeconds;
   int i;

   cin >> numSeconds;

   // Modified portion of code
   areaValues = new int[numSeconds + 1];
   // End modified portion of code

   for (i = 0; i < numSeconds + 1; ++i) {
      cin >> areaValues[i];
   }

   PrintAreaChanges(areaValues, numSeconds + 1);

   delete[] areaValues;

   return 0;
}