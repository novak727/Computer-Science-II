//************************************
// Name: Devin Kennedy
// Date: 2/20/2025
// Course: CS255-01 - Computer Science II
// Description: Calculate and compare the area of two triangles using
//              base and heights from user input
// File name: main.cpp
//************************************
#include <iostream>
#include "Triangle.h"
using namespace std;

int main() {
   Triangle triangle1;
   Triangle triangle2;

   // Retrieve base and height from user input
   // Stored in temporary variables to set Triangle base and height
   double userBase = 0.0;
   double userHeight = 0.0;

   cin >> userBase >> userHeight;
   triangle1.SetBase(userBase);
   triangle1.SetHeight(userHeight);

   cin >> userBase >> userHeight;
   triangle2.SetBase(userBase);
   triangle2.SetHeight(userHeight);
        
   // Get and compare areas
   // Print out the smaller triangle's base, height, and area
   cout << "Triangle with smaller area:" << endl;

   double t1Area = triangle1.GetArea();
   double t2Area = triangle2.GetArea();

   if (t1Area < t2Area)
      triangle1.PrintInfo();
   else
      triangle2.PrintInfo();

   return 0;
}
