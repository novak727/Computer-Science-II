//************************************
// Name: Devin Kennedy
// Date: 1/13/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_1.4.1_loop_to_modify_copy_array_level2.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Array pointsData has NUM_POINTS numbers read from input. Write a loop that
 * assigns array leftShiftedData's elements with pointsData's elements shifted
 * to the left by one index. The element at index 0 of pointsData should be
 * copied to the end of leftShiftedData.
 */
//************************************

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   const int NUM_POINTS = 6;
   double pointsData[NUM_POINTS];
   double leftShiftedData[NUM_POINTS];
   int i;

   for (i = 0; i < NUM_POINTS; ++i) {
	   cin >> pointsData[i];
   }

   // Modified portion of code
   for (i=0; i<NUM_POINTS; i++) {
      if (i == 0)
         leftShiftedData[NUM_POINTS - 1] = pointsData[i];
      else
         leftShiftedData[i - 1] = pointsData[i];
   }
   // End modified portion of code

   cout << "Original points: ";
   for (i = 0; i < NUM_POINTS; ++i) {
      cout << fixed << setprecision(1) << pointsData[i] << " ";
   }
   cout << endl;

   cout << "Updated points: ";
   for (i = 0; i < NUM_POINTS; ++i) {
       cout << fixed << setprecision(1) << leftShiftedData[i] << " ";
   }
   cout << endl;

   return 0;
}