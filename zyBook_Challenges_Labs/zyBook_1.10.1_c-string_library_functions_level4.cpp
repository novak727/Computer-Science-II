//************************************
// Name: Devin Kennedy
// Date: 1/13/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_1.10.1_c-string_library_functions_level4.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Variables patientName and searchChar are assigned with a string and character
 * read from input. For each character in patientName, assign the character with
 * '=' if the character is equal to searchChar.
 * 
 * Ex: If the input is:
 * Maria
 * a
 * 
 * then the output is:
 * M=ri=
 */
//************************************

#include <cstring>
#include <iostream>
using namespace std;

int main() {
   char patientName[20];
	char searchChar;
	int i;

   cin >> patientName;
	cin >> searchChar;

	// Modified portion of code
   for (i = 0; i < strlen(patientName); i++) {
      if (patientName[i] == searchChar) {
         patientName[i] = '=';
      }
   }
   // End modified portion of code

	cout << patientName << endl;

   return 0;
}