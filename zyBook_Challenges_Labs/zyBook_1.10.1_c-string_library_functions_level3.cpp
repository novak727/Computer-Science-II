//************************************
// Name: Devin Kennedy
// Date: 1/13/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_1.10.1_c-string_library_functions_level3.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Variables colorName1 and colorName2 are assigned with strings read from
 * input. Output "Colors match" if colorName1 and colorName2 are equal, and
 * output "Colors do not match" otherwise. End with a newline.
 */
//************************************

#include <cstring>
#include <iostream>
using namespace std;

int main() {
   char colorName1[80];
   char colorName2[80];

   cin.getline(colorName1, 80);
   cin.getline(colorName2, 80);

   // Modified portion of code
   if (strcmp(colorName1, colorName2))
      cout << "Colors do not match" << endl;
   else
      cout << "Colors match" << endl;
   // End modified portion of code

   return 0;
}