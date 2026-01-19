//************************************
// Name: Devin Kennedy
// Date: 3/18/2025
// Course: CS255-01 - Computer Science II
// Description: Create 3 new Student objects and calculate the avergae GPA
// File name: main.cpp
//************************************
#include <iostream>
#include <iomanip>
#include "Student.h"
using namespace std;

int main() {
   string name1, name2, name3;
   double gpa1, gpa2, gpa3, aveGpa;
   Student *stdn1, *stdn2, *stdn3;
   
   // Read input
   cin >> name1;
   cin >> gpa1;
   cin >> name2;
   cin >> gpa2;
   cin >> name3;
   cin >> gpa3;
   
   // New Student objects
   stdn1 = new Student(name1, gpa1);
   stdn2 = new Student(name2, gpa2);
   stdn3 = new Student(name3, gpa3);
   
   // Calculate average GPA
   aveGpa = (gpa1 + gpa2 + gpa3) / 3.0;
   
   // Output results
   cout << "Students:" << endl;
   stdn1->PrintInfo();
   stdn2->PrintInfo();
   stdn3->PrintInfo();
   cout << endl;
   cout << fixed << setprecision(3); 
   cout << "Average GPA: " << aveGpa << endl;
   
   // Deallocate memory
   delete stdn1;
   delete stdn2;
   delete stdn3;

   return 0;
}
