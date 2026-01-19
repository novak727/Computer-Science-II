//************************************
// Name: Devin Kennedy
// Date: 4/19/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_5.5.2_creating_recursive_function_level2.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Write SumAll()'s recursive case to:
 *
 * Output argValue followed by " + ".
 * Recursively call SumAll() with argValue - 3.
 * Return argValue added to the return value of the recursive call.
 * Ex: If the input is 10, then the output is:
 *
 * 10 + 7 + 4 + 1 = 22
 */
//************************************

#include <iostream>
using namespace std;

int SumAll(int argValue) {
   if (argValue <= 3) {
      cout << argValue;
		return argValue;
   }

   // Modified portion of code
   else {
      cout << argValue << " + ";
      return argValue + SumAll(argValue - 3);
   }
   // End modified portion of code

}

int main() {
   int argValue;
	int sum;
   
   cin >> argValue;
	sum = SumAll(argValue);
	cout << " = " << sum << endl;
   
   return 0;
}