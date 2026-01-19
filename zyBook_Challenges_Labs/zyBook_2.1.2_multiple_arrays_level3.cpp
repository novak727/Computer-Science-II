//************************************
// Name: Devin Kennedy
// Date: 1/16/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_2.1.2_multiple_arrays_level3.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Integer arrays busTags and distanceTraveled contain elements read from input.
 * For each element in distanceTraveled, if an element is greater than or equal
 * to 30, output busTags' corresponding element followed by a space. After the
 * final output, end with a newline.
 *
 * Ex: If the input is:
 * 152 186 108 122
 * 30 25 11 39
 *
 * then the output is:
 * 152 122
 */
 //************************************

#include <iostream>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   int busTags[NUM_VALS];
   int distanceTraveled[NUM_VALS];
   int i;

   for (i = 0; i < NUM_VALS; ++i) {
      cin >> busTags[i];
   }

   for (i = 0; i < NUM_VALS; ++i) {
      cin >> distanceTraveled[i];
   }

   // Modified portion of code
   for (int i=0; i<NUM_VALS; i++)
      if (distanceTraveled[i] >= 30)
         cout << busTags[i] << " ";
   // End modified portion of code

   cout << endl;

   return 0;
}