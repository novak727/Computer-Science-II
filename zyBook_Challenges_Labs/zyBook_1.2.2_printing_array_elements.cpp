//************************************
// Name: Devin Kennedy
// Date: 1/13/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_1.2.2_printing_arry_elements.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Write three statements to print the first three elements of array runTimes.
 * Follow each statement with a newline.
 * Ex: If runTimes = {800, 775, 790, 805, 808}, print:
 * 800
 * 775
 * 790
 */
 //************************************

#include <iostream>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 5;
   int runTimes[NUM_ELEMENTS];
   int i;

   for (i = 0; i < NUM_ELEMENTS; ++i) {
      cin >> runTimes[i];
   }

   // Modified portion of code
   cout << runTimes[0] << endl;
   cout << runTimes[1] << endl;
   cout << runTimes[2] << endl;
   // End modified portion of code

   return 0;
}