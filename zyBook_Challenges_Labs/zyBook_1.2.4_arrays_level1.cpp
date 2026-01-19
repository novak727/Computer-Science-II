//************************************
// Name: Devin Kennedy
// Date: 1/13/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_1.2.4_arrays_level1.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Declare an array of integers named applicantNumbers of size 6.
 *
 * Ex: If the input is 87 52 11 58 18 1, then the output is:
 *
 * Applicant numbers: 1 18 58 11 52 87
 */
//************************************

#include <iostream>
using namespace std;

int main() {
   int applicant1;
   int applicant2;
   int applicant3;
   int applicant4;
   int applicant5;
   int applicant6;
   int i;

   // Modified portion of code
   int applicantNumbers[6];
   // End modified portion of code
   cin >> applicant1;
   cin >> applicant2;
   cin >> applicant3;
   cin >> applicant4;
   cin >> applicant5;
   cin >> applicant6;

   applicantNumbers[0] = applicant6;
   applicantNumbers[1] = applicant5;
   applicantNumbers[2] = applicant4;
   applicantNumbers[3] = applicant3;
   applicantNumbers[4] = applicant2;
   applicantNumbers[5] = applicant1;

   cout << "Applicant numbers: ";
   for (i = 0; i < 6; ++i) {
      cout << applicantNumbers[i] << " ";
   }
   cout << endl;

   return 0;
}