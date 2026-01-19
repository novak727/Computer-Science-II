//************************************
// Name: Devin Kennedy
// Date: 4/21/2025
// Course: CS255-01 - Computer Science II
// Description: Print a string (inputted by the user) in reverse
// File name: zyLab12_Recursion_ReverseString.cpp
//************************************

#include <iostream>
#include <string>
using namespace std;

//************************************
// FUNCTION DECLARATION
//************************************
string ReverseString(string e);
   
int main() {
   string input, result;
   
   getline(cin, input);
   result = ReverseString(input);
   cout << "Reverse of \"" << input << "\" is \"" << result << "\"." << endl;
   
   return 0;
}

//************************************
// ReverseString() takes a string e and returns the string in reverse.
//************************************
string ReverseString(string e) {
   if (e.empty()) // check that a string exists
      return ""; // allows a way to break out once recursed through the entire string as well

   // Pass through the string e recursively but with the first character not included (using substr())
   // Then append the first character at the end of the string being returned recursively
   return ReverseString(e.substr(1)) + e[0];
}