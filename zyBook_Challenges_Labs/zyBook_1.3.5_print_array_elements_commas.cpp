//************************************
// Name: Devin Kennedy
// Date: 
// Course: CS255-01 - Computer Science II
// File name: 
//************************************

//************************************
// zyBook Challenge: 
/*
 * Write a for loop to print all NUM_VALS elements of array hourlyTemp.
 * Separate elements with a comma and space. Ex: If
 * hourlyTemp = {90, 92, 94, 95}, print:
 *
 * 90, 92, 94, 95
 *
 * Your code's output should end with the last element, without a subsequent
 * comma, space, or newline.
 */
//************************************

#include <iostream>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   int hourlyTemp[NUM_VALS];
   int i;

   for (i = 0; i < NUM_VALS; ++i) {
      cin >> hourlyTemp[i];
   }

   // Modified portion of code
   for (i=0; i<NUM_VALS - 1; i++)
      cout << hourlyTemp[i] << ", ";
   // End modified portion of code

   cout << hourlyTemp[i];

   cout << endl;

   return 0;
}