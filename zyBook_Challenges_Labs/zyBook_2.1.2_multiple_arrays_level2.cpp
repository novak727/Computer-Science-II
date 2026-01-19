//************************************
// Name: Devin Kennedy
// Date: 1/16/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_2.1.2_multiple_arrays_level2.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Integer array originalArr contains the first NUM_VALS elements read from
 * input, while integer array resetArr contains the next NUM_VALS elements read
 * from input. If an element in originalArr is not a multiple of the
 * corresponding element in resetArr, replace the element in originalArr with
 * the corresponding element in resetArr times 4.
 *
 * Ex: If the input is:
 * 21 32 16 25
 * 5 8 4 6
 *
 * then the output is:
 * 20 32 16 24
 *
 * Note: Given integers A and B, A is a multiple of B only if A % B == 0.
 */
//************************************

#include <iostream>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   int originalArr[NUM_VALS];
   int resetArr[NUM_VALS];
   int i;

   for (i = 0; i < NUM_VALS; ++i) {
      cin >> originalArr[i];
   }

   for (i = 0; i < NUM_VALS; ++i) {
      cin >> resetArr[i];
   }

   // Modified portion of code
   for (int i=0; i<NUM_VALS; i++)
      if (originalArr[i] % resetArr[i] != 0)
         originalArr[i] = resetArr[i] * 4;
   // End modified portion of code

   for (i = 0; i < NUM_VALS; ++i) {
      cout << originalArr[i] << " ";
   }
   cout << endl;

   return 0;
}