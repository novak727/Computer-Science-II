//************************************
// Name: Devin Kennedy
// Date: 4/19/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_5.2.1_calling_recursive_function.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Write a statement that calls the recursive function BackwardsAlphabet() with
 * parameter startingLetter.
 */
//************************************

#include <iostream>
using namespace std;

void BackwardsAlphabet(char currLetter){
   if (currLetter == 'a') {
      cout << currLetter << endl;
   }
   else{
      cout << currLetter << " ";
      BackwardsAlphabet(currLetter - 1);
   }
}

int main() {
   char startingLetter;

   cin >> startingLetter;

   // Modified portion of code
   BackwardsAlphabet(startingLetter);
   // End modified portion of code

   return 0;
}