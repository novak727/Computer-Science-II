//************************************
// Name: Devin Kennedy
// Date: 1/16/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_2.1.1_multiple_arrays_level2.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * For any element in keysList with a value greater than 40, print the
 * corresponding value in itemsList, followed by a comma (no spaces).
 *
 * Ex: If keysList = {32, 105, 101, 35} and itemsList = {10, 20, 30, 40}, print:
 * 20,30,
 */
//************************************

#include <iostream>
using namespace std;

int main() {
   const int SIZE_LIST = 4;
   int keysList[SIZE_LIST];
   int itemsList[SIZE_LIST];
   int i;

   cin >> keysList[0];
   cin >> keysList[1];
   cin >> keysList[2];
   cin >> keysList[3];

   cin >> itemsList[0];
   cin >> itemsList[1];
   cin >> itemsList[2];
   cin >> itemsList[3];

   // Modified portion of code
   for (int i=0; i<SIZE_LIST; i++)
      if (keysList[i] > 40)
         cout << itemsList[i] << ",";
   // End modified portion of code

   cout << endl;

   return 0;
}