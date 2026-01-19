//************************************
// Name: Devin Kennedy
// Date: 4/19/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_5.5.2_creating_recursive_function_level1.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Write GetPowers()'s base case to output "4 to the power of 0 is 1" and return
 * 1 if param is equal to 0.
 * 
 * Ex: If the input is 3, then the output is:
 * 
 * 4 to the power of 0 is 1
 * 4 to the power of 1 is 4
 * 4 to the power of 2 is 16
 * 4 to the power of 3 is 64
 */
//************************************

#include <iostream>
using namespace std;

int GetPowers(int param) {
   int result;

   // Modified portion of code
   if (param == 0) {
      cout << "4 to the power of 0 is 1" << endl;
      return 1;
   }
   // End modified portion of code

   else {
      result = 4 * GetPowers(param - 1);
		cout << "4 to the power of " << param << " is " << result << endl;
		return result;
   }
}

int main() {
   int param;
   
   cin >> param;
   GetPowers(param);
   
   return 0;
}