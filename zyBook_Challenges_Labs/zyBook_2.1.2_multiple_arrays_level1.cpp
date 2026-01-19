//************************************
// Name: Devin Kennedy
// Date: 1/16/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_2.1.2_multiple_arrays_level1.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Integer array origArr contains the first NUM_VALS elements read from input,
 * while integer array offsetArr contains the next NUM_VALS elements read from
 * input. Update each element in origArr with origArr's element minus the
 * corresponding element in offsetArr.
 *
 * Ex: If the input is:
 * 25 50 30 20
 * 10 60 35 15
 *
 * then the output is:
 * 15 -10 -5 5
 */
 //************************************

#include <iostream>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   int origArr[NUM_VALS];
   int offsetArr[NUM_VALS];
   int i;

   for (i = 0; i < NUM_VALS; ++i) {
      cin >> origArr[i];
   }

   for (i = 0; i < NUM_VALS; ++i) {
      cin >> offsetArr[i];
   }

   // Modified portion of code
   for (int i=0; i<NUM_VALS; i++)
      origArr[i] -= offsetArr[i];
   // End modified portion of code

   for (i = 0; i < NUM_VALS; ++i) {
      cout << origArr[i] << " ";
   }
   cout << endl;

   return 0;
}