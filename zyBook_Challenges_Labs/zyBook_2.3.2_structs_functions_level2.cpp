//************************************
// Name: Devin Kennedy
// Date: 1/16/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_2.3.2_structs_functions_level2.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Complete the function ConvertToFeetAndInches to convert totalInches to feet
 * and inches. Return feet and inches using the HeightFtIn struct. Ex: 26 inches
 * is 2 feet and 2 inches.
*/
//************************************

#include <iostream>
using namespace std;

struct HeightFtIn {
   int feetVal;
   int inchesVal;
};

HeightFtIn ConvertToFeetAndInches(int totalInches) {
   HeightFtIn tempVal;
   
   // Modified portion of code
   tempVal.feetVal = totalInches / 12;
   tempVal.inchesVal = totalInches % 12;
   
   return tempVal;
   // End modified portion of code
}

int main() {
   HeightFtIn objectSize;
   int totalInches;

   cin >> totalInches;

   objectSize = ConvertToFeetAndInches(totalInches);

   cout << objectSize.feetVal << " feet and " << objectSize.inchesVal << " inches" << endl;

   return 0;
}