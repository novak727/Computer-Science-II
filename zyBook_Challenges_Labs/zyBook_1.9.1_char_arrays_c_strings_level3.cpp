//************************************
// Name: Devin Kennedy
// Date: 1/13/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_1.9.1_char_arrays_c_strings_level3.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * String userInput is read from input. Write a for loop that traverses the
 * string userInput. Within the loop, overwrite the character that is not equal
 * to 'T' in userInput with the null character '\0'.
 *
 * Ex: If the input is TTvT, then the output is:
 *
 * TT
 */
 //************************************

#include <iostream>
using namespace std;

int main() {
   char userInput[20];
   int i;

   cin >> userInput;
   
   // Modified portion of code
   for (int i=0; i<20; i++)
      if (userInput[i] != 'T')
         userInput[i] = '\0';
   // End modified portion of code

   cout << userInput << endl;

   return 0;
}