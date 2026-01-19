//************************************
// Name: Devin Kennedy
// Date: 1/13/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_1.9.1_char_arraus_c_strings_level2.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * String inputValue is read from input. Overwrite a character of string
 * inputValue with the null character '\0' so the output is the first 10
 * characters in inputValue.
 *
 * Ex: If the input is 7#-9TQPy!2%6@, then the output is:
 * 7#-9TQPy!2
 */
//************************************

#include <iostream>
using namespace std;

int main() {
   char inputValue[20];

   cin >> inputValue;
   
   // Modified portion of code
   inputValue[10] = '\0';
   // End modified portion of code

   cout << inputValue << endl; 

   return 0;
}