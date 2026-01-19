//************************************
// Name: Devin Kennedy
// Date: 1/16/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_2.3.2_structs_functions_level3.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Define a function SetBirth, with int parameters monthVal and dayVal,
 * that returns a struct of type BirthdayDate. The function should assign
 * BirthdayDate's data member numMonths with monthVal and numDays with dayVal.
*/
//************************************

#include <iostream>
using namespace std;

struct BirthdayDate {
   int numMonths;
   int numDays;
};

// Modified portion of code
BirthdayDate SetBirth(int monthVal, int dayVal) {
   BirthdayDate temp;
   
   temp.numMonths = monthVal;
   temp.numDays = dayVal;
   
   return temp;
}
// End modified portion of code

int main() {
   BirthdayDate myBirthday;
   int monthVal;
   int dayVal;

   cin >> monthVal >> dayVal;

   myBirthday = SetBirth(monthVal, dayVal);

   cout << "I was born on " << myBirthday.numMonths << "/" << myBirthday.numDays << "." << endl;

   return 0;
}