//************************************
// Name: Devin Kennedy
// Date: 1/13/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_1.8.1_find_2d_array_max_min.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Write a loop to iterate from 0 to the last row of milesTracker. Within each
 * row, use a nested loop to iterate from 0 to the last column of milesTracker.
 *
 * Within the nested loop, if an element is greater than maxMiles, assign
 * maxMiles with the value of the element. Similarly, if an element is less
 * than minMiles, assign minMiles with the value of the element.
 *
 * Ex: If the input is:
 * -10 20 30 40
 *
 * the output is:
 * Min miles: -10
 * Max miles: 40
 */
//************************************

#include <iostream>
using namespace std;

int main() {
   const int NUM_ROWS = 2;
   const int NUM_COLS = 2;
   int milesTracker[NUM_ROWS][NUM_COLS];
   int i;
   int j;
   int maxMiles = 0;
   int minMiles = 0;
   int value;

   for (i = 0; i < NUM_ROWS; i++){
      for (j = 0; j < NUM_COLS; j++){
         cin >> value;
         milesTracker[i][j] = value;
      }
   }

   maxMiles = milesTracker[0][0];
   minMiles = milesTracker[0][0];

   // Modified portion of code
   for (int i=0; i<NUM_ROWS; i++) {
      for (int j=0; j<NUM_COLS; j++) {
         if (milesTracker[i][j] < minMiles)
            minMiles = milesTracker[i][j];
         if (milesTracker[i][j] > maxMiles)
            maxMiles = milesTracker[i][j];
      }
   }
   // End modified portion of code

   cout << "Min miles: " << minMiles << endl;
   cout << "Max miles: " << maxMiles << endl;

   return 0;
}