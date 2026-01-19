//************************************
// Name: Devin Kennedy
// Date: 1/13/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_1.4.1_loop_to_modify_copy_array_level1.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Array weeklyRentData has NUM_WEEKLY_RENT integers read from input. For each
 * element in weeklyRentData that is less than 130:
 *
 * Output the element, followed by ": corrected to twice the current value" and
 * a newline.
 * Assign the element with twice the element's current value.
 */
 //************************************

#include <iostream>
using namespace std;

int main() {
   const int NUM_WEEKLY_RENT = 7;
   int weeklyRentData[NUM_WEEKLY_RENT];
   int i;

   printf("Raw weekly rent: ");
   for (i = 0; i < NUM_WEEKLY_RENT; ++i) {
      cin >> weeklyRentData[i];
      cout << weeklyRentData[i] << " ";
   }
   cout << endl;

   // Modified portion of code
   for (i=0; i<NUM_WEEKLY_RENT; i++)
      if (weeklyRentData[i] < 130) {
         cout << weeklyRentData[i] << ": corrected to twice the current value" << endl;
         weeklyRentData[i] *= 2;
      }
   // End modified portion of code

   cout << "Adjusted weekly rent: ";
   for (i = 0; i < NUM_WEEKLY_RENT; ++i) {
      cout << weeklyRentData[i] << " ";
   }
   cout << endl;

   return 0;
}