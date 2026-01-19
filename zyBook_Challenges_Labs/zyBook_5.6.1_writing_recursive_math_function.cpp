//************************************
// Name: Devin Kennedy
// Date: 4/19/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_5.6.1_writing_recursive_math_function.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Write code to complete RaiseToPower(). Sample output if userBase is 4 and
 * userExponent is 2 is shown below. Note: This example is for practicing
 * recursion; a non-recursive function, or using the built-in function pow(),
 * would be more common.
 * 
 * 4^2 = 16
 */
//************************************

#include <iostream>
using namespace std;

int RaiseToPower(int baseVal, int exponentVal){
   int resultVal;

   if (exponentVal == 0) {
      resultVal = 1;
   }
   else {
      resultVal = baseVal * RaiseToPower(baseVal, exponentVal - 1); // Modified line of code, adding RaiseToPower() recursion
   }

   return resultVal;
}

int main() {
   int userBase;
   int userExponent;

   cin >> userBase;
   cin >> userExponent;
   cout << userBase << "^" << userExponent << " = "
        << RaiseToPower(userBase, userExponent) << endl;

   return 0;
}