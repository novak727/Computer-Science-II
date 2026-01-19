//************************************
// Name: Devin Kennedy
// Date: 4/19/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_5.5.2_creating_recursive_function_level3.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Complete FindMerchandise()'s recursive case:
 *
 * If total = 400, call FindMerchandise() to compute the next month's total as the current month's total plus 50.
 * Otherwise, call FindMerchandise() to compute the next month's total as the current month's total plus 20.
 * Ex: If the input is 360, then the output is:
 *
 * month: 1, total: 360
 * month: 2, total: 410
 * month: 3, total: 430
 * month: 4, total: 450
 * month: 5, total: 470
 * Projection ended
 */
//************************************

#include <iostream>
using namespace std;

void FindMerchandise(int month, int total) {
   cout << "month: " << month << ", total: " << total << endl;
	
	if (month == 5) {
      cout << "Projection ended" << endl;
   }
   else {

      // Modified portion of code
      if (total <= 400)
         FindMerchandise(month + 1, total + 50);
      else
         FindMerchandise(month + 1, total + 20);
      // End modified portion of code

   }
}

int main() {
   int total;
   
   cin >> total;
   FindMerchandise(1, total);
   
   return 0;
}