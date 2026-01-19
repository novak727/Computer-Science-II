//************************************
// Name: Devin Kennedy
// Date: 1/13/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_1.9.1_char_arrays_c_strings_level1.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Declare and initialize a C string called animalString with the value "hawk".
 *
 * Ex: The output is:
 * Oma saw a hawk.
*/
//************************************

#pragma GCC diagnostic push
#pragma GCC diagnostic error "-Wwrite-strings" // Ensures that the intended style of solution is used
#include <iostream>
using namespace std;

int main() {
   // Modified portion of code
   char animalString[5] = "hawk";
   // End modified portion of code

   cout << "Oma saw a " << animalString << "." << endl; 

   return 0;
}
#pragma GCC diagnostic pop