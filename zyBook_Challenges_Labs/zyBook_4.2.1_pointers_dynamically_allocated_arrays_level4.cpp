//************************************
// Name: Devin Kennedy
// Date: 3/12/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_4.2.1_pointers_dynamically_allocated_arrays_level4.cpp
//************************************

//************************************
// zyBook Challenge: 
/* Integer numClasses is read from input, and studentsRegistered is an
 * integer pointer. Perform the following tasks:
 *
 * - Dynamically allocate an array with numClasses elements, and assign
 * studentsRegistered with the array's address.
 * - For indices 0 to numClasses - 1 of studentsRegistered, assign
 * studentsRegistered[i] with the next integer read from input.
 * - Call PrintStudentsData() to output the elements in studentsRegistered.
 * - Deallocate the array pointed to by studentsRegistered.
 */
//************************************

#include <iostream>
using namespace std;

void PrintStudentsData(int* arrayPtr, int arraySize) {
   int i;

   if (arrayPtr != nullptr) {
      cout << "Students in classes: ";
      for (i = 0; i < arraySize - 1; ++i) {
         cout << arrayPtr[i] << ", ";
      }
      cout << arrayPtr[arraySize - 1] << endl;
   }
}

int main() {
   int* studentsRegistered = nullptr;
   int numClasses;
   int i;

   cin >> numClasses;

   // Modified portion of code
   studentsRegistered = new int[numClasses];
   
   for (i=0; i < numClasses; i++)
      cin >> studentsRegistered[i];
   
   PrintStudentsData(studentsRegistered, i);
   
   delete[] studentsRegistered;
   // End modified portion of code

   return 0;
}