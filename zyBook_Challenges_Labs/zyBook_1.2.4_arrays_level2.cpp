//************************************
// Name: Devin Kennedy
// Date: 1/13/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_1.2.4_arrays_level2.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Assign the four elements of userNums with floating-point values read from
 * input.
 *
 * Ex: If the input is 68.4 28.7 58.0 69.8, then the output is:
 *
 * Array contents: 68.4 28.7 58.0 69.8
 */
 //************************************

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   const int NUM_ELEMS = 4;
   double userNums[NUM_ELEMS];
   int i;

   // Modified portion of code
   cin >> userNums[0] >> userNums[1] >> userNums[2] >> userNums[3];
   // End modified portion of code

   cout << "Array contents: ";
   for (i = 0; i < NUM_ELEMS; ++i) {
      cout << fixed << setprecision(1) << userNums[i] << " ";
   }
   cout << endl;

   return 0;
}