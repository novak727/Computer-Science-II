//************************************
// Name: Devin Kennedy
// Date: 1/13/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_1.10.1_c-string_library_functions_level1.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Character array nameStr is assigned with "Zak?????????", and myName is
 * assigned with a string read from input. Copy the first 8 characters of
 * myName to the beginning of nameStr.
 * 
 * Ex: If the input is Milton#####, then the output is:
 * Milton##????
*/
//************************************

#include <cstring>
#include <iostream>
using namespace std;

int main() {
   char nameStr[50] = "Zak?????????";
	char myName[50];

   cin >> myName;

   // Modified portion of code
   strncpy(nameStr, myName, 8);
   // End modified portion of code
   
   cout << nameStr << endl;

   return 0;
}