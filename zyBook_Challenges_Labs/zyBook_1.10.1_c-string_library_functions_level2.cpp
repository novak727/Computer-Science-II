//************************************
// Name: Devin Kennedy
// Date: 1/13/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_1.10.1_c-string_library_functions_level2.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Variable updatedMeters is initialized with "Meters: ". Variables
 * originalMeters and numChars contain a string and integer read from input,
 * respectively. Use strncat() to copy the first numChars characters of
 * originalMeters to the end of updatedMeters.
 * 
 * Ex: If the input is:
 * 717.1627342 meters
 * 8
 * 
 * then the output is:
 * Meters: 717.1627
 */
//************************************

#include <cstring>
#include <iostream>
using namespace std;

int main() {
   char originalMeters[80];
	char updatedMeters[80] = "Meters: ";
	int numChars;

   cin.getline(originalMeters, 80);
	cin >> numChars;

	// Modified portion of code
   strncat(updatedMeters, originalMeters, numChars);
   // End modified portion of code

   cout << updatedMeters << endl;

   return 0;
}