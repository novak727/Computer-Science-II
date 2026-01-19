//************************************
// Name: Devin Kennedy
// Date: 1/13/2025
// Course: CS255-01 - Computer Science II
// File name: zyBooks_1.2.4_arrays_level3.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Array studentNums is assigned with NUM_VALS integers read from input.
 * Assign integer sumVals with the sum of the first element and the
 * second-to-last element of studentNums.
 *
 * Ex: If the input is 15 63 36 76 46, then the output is:
 */
 //************************************

#include <iostream>
using namespace std;

int main() {
   const int NUM_VALS = 5;
   int studentNums[NUM_VALS];
   int sumVals;
   int i;
   
   for (i = 0; i < NUM_VALS; ++i) {
      cin >> studentNums[i];
   }

   // Modified portion of code
   sumVals = studentNums[0] + studentNums[NUM_VALS - 2];
   // End modified portion of code

   cout << sumVals << endl;

   return 0;
}