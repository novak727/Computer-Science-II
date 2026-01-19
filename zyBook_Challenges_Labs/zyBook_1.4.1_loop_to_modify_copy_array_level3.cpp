//************************************
// Name: Devin Kennedy
// Date: 1/13/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_1.4.1_loop_to_modify_copy_array_level3.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Array pointsList has NUM_POINTS numbers read from input. Array newList has
 * half the size of pointsList. Write a loop that iterates through newList and
 * assigns each element in newList with the corresponding element in the second
 * half of pointsList.
 *
 * Note: Input array always has an even number of elements.
 */
 //************************************

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   const int NUM_POINTS = 10;
   double pointsList[NUM_POINTS];
   double newList[NUM_POINTS / 2];
   int i;

   for (i = 0; i < NUM_POINTS; ++i) {
      cin >> pointsList[i];
   }

   // Modified portion of code
   for (i = 0; i<NUM_POINTS / 2; i++) {
      newList[i] = pointsList[(NUM_POINTS / 2) + i];
   }
   // End modified portion of code

   cout << "Original points: ";
   for (i = 0; i < NUM_POINTS; ++i) {
      cout << fixed << setprecision(1) << pointsList[i] << " ";
   }
   cout << endl;

   cout << "Second half: ";      
   for (i = 0; i < NUM_POINTS / 2; ++i) {
      cout << fixed << setprecision(1) << newList[i] << " ";
   }
   cout << endl;

   return 0;
}