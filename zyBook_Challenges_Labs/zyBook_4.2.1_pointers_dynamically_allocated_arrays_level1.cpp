//************************************
// Name: Devin Kennedy
// Date: 3/12/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_4.2.1_pointers_dynamically_allocated_arrays_level1.cpp
//************************************

//************************************
// zyBook Challenge: 
/* 
 * Declare zinniasOrdered as an integer pointer and initialize zinniasOrdered
 * with nullptr.
 */
//************************************

#include <iostream>
using namespace std;

void PrintBunchData(int* arrayPtr, int arraySize) {
   int i;

   if (arrayPtr != nullptr) {
      for (i = 0; i < arraySize; ++i) {
         cout << "Bunch " << i + 1 << ": " << arrayPtr[i] << " zinnias" << endl;
      }
   }
   else {
      cout << "No bunches" << endl;
   }
}

int main() {
   int numBunches;
   int i;

   // Modified portion of code
   int* zinniasOrdered = nullptr;
   // End modified portion of code

   cin >> numBunches;

   if (numBunches > 0) {
      zinniasOrdered = new int[numBunches];

      for (i = 0; i < numBunches; ++i) {
         cin >> zinniasOrdered[i];
      }
   }

   PrintBunchData(zinniasOrdered, numBunches);

   delete[] zinniasOrdered;

   return 0;
}