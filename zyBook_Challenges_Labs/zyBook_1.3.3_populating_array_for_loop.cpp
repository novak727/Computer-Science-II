//************************************
// Name: Devin Kennedy
// Date: 1/13/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_1.3.3_populating_array_for_loop.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Write a for loop to populate array userGuesses with NUM_GUESSES integers.
 * Read integers using cin. Ex: If NUM_GUESSES is 3 and user enters 9 5 2, then
 * userGuesses is {9, 5, 2}.
 *
 */
 //************************************

#include <iostream>
using namespace std;

int main() {
   const int NUM_GUESSES = 3;
   int userGuesses[NUM_GUESSES];
   int i;

   // Modified portion of code
   for (int i=0; i<NUM_GUESSES; i++)
       cin >> userGuesses[i];
   // End modified portion of code

   for (i = 0; i < NUM_GUESSES; ++i) {
     cout << userGuesses[i] << " ";
   }

   return 0;
}