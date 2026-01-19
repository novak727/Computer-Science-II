//************************************
// Name: Devin Kennedy
// Date: 4/21/2025
// Course: CS255-01 - Computer Science II
// Description: Draw an upside down triangle with an odd base recursively
// File name: zyLab11_Recursion_UpsideDownTriangle.cpp
//************************************

#include <iostream>
using namespace std;

//************************************
// FUNCTION DECLARATION
//************************************
void DrawTriangle(int e);

int main() {
   int baseLength;
   
   cin >> baseLength;
   DrawTriangle(baseLength);
   return 0;
}

//************************************
// DrawTriangle() draws an upside-down triangle based with a base length of
// int e, with each line being 2 less than the line above. The last line has 9
// spaces preceding the single * character. 
//************************************
void DrawTriangle(int e) {
   if (e < 1)
       return; // break out of the function immediately when e is 0 or negative
              // This prevents an infinite loop

   int spaces = (19 - e) / 2; // since 19 is the largest base possible, assuming
                              // all bases are odd and less than 20
   for (int i = 0; i < spaces; i++)
      cout << " ";
   
   for (int i = 0; i < e; i++)
      cout << "*";

   cout << endl;

   DrawTriangle(e - 2);
}