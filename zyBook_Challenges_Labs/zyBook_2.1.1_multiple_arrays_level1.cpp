//************************************
// Name: Devin Kennedy
// Date: 1/16/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_2.1.1_multiple_arrays_level1.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Subtract each element in origList with the corresponding value in
 * offsetAmount. Print each difference followed by a semicolon (no spaces).
 *
 * Ex: If origList = {4, 5, 10, 12} and offsetAmount = {2, 4, 7, 3}, print:
 * 2;1;3;9;
*/
//************************************

#include <iostream>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   int origList[NUM_VALS];
   int offsetAmount[NUM_VALS];
   int i;

   cin >> origList[0];
   cin >> origList[1];
   cin >> origList[2];
   cin >> origList[3];

   cin >> offsetAmount[0];
   cin >> offsetAmount[1];
   cin >> offsetAmount[2];
   cin >> offsetAmount[3];

   // Modified portion of code
   for (int i=0; i<NUM_VALS; i++)
      cout << origList[i] - offsetAmount[i] << ";";
   // End modified portion of code

   cout << endl;

   return 0;
}