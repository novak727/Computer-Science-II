//************************************
// Name: Devin Kennedy
// Date: 4/20/2025
// Course: CS255-01 - Computer Science II
// Description: Recursive function that counts the number of digits in an
//              integer
// File name: zyLab10_Recursion_CountDigits.cpp
//************************************

#include <iostream>
using namespace std;

//************************************
// FUNCTION DECLARATION
//************************************
int DigitCount(int e);

int main() {
   int num;
   int digits;

   cin >> num;
   digits = DigitCount(num);
   cout << digits << endl;
   return 0;
}

//************************************
// DigitCount() returns the number of digits in an integer.
//************************************
int DigitCount(int e) {
   int numDigits = 0;
   if (e < 10)
      numDigits = 1;
   else
      numDigits = DigitCount(e / 10) + 1;
      
   return numDigits;
}