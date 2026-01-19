//************************************
// Name: Devin Kennedy
// Date: 3/12/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_4.7.3_find_cstring_in_cstring.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Assign the first instance of "The" in movieTitle to movieResult.
 */
//************************************

#include <iostream>
#include <cstring>
using namespace std;

int main() {
   char movieTitle[100];
   char* movieResult = nullptr;

   cin.getline(movieTitle, 100);

   // Modified portion of code
   movieResult = strstr(movieTitle, "The");
   // End modified portion of code

   cout << "Movie title contains The? ";
   if (movieResult != nullptr) {
      cout << "Yes." << endl;
   }
   else {
      cout << "No." << endl;
   }

   return 0;
}