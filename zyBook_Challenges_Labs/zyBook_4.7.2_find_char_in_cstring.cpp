//************************************
// Name: Devin Kennedy
// Date: 3/12/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_4.7.2_find_char_in_cstring.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Assign a pointer to any instance of searchChar in personName to
 * searchResult.
 */
//************************************

#include <iostream>
#include <cstring>
using namespace std;

int main() {
   char personName[100];
   char searchChar;
   char* searchResult = nullptr;

   cin.getline(personName, 100);
   cin >> searchChar;

   // Modified portion of code
   searchResult = strchr(personName, searchChar);
   // End modified portion of code

   if (searchResult != nullptr) {
      cout << "Character found." << endl;
   }
   else {
      cout << "Character not found." << endl;
   }

   return 0;
}