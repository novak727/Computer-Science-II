//************************************
// Name: Devin Kennedy
// Date: 1/13/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_1.2.4_arrays_level4.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Array userPoints is assigned with NUM_ELEMENTS integers read from input.
 * Output all elements of userPoints in reverse order, following each element
 * with a space, including the last. After the final output, end with a newline.
 *
 * Ex: If the input is 48 85 70 8, then the output is:
 *
 * Array contents in reverse: 8 70 85 48
 *
 * Note: The loop should start with i = NUM_ELEMENTS - 1 and end with i = 0.
 */
//************************************

#include <iostream>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 4;
   int userPoints[NUM_ELEMENTS];
   int i;

   for (i = 0; i < NUM_ELEMENTS; ++i) {
      cin >> userPoints[i];
   }

   cout << "Array contents in reverse: ";

   // Modified portion of code
   for (int i=NUM_ELEMENTS - 1; i>=0; i--)
      cout << userPoints[i] << " ";
   // End modified portion of code

   cout << endl;

   return 0;
}