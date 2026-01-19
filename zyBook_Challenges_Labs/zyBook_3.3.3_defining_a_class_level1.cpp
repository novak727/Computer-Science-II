//************************************
// Name: Devin Kennedy
// Date: 2/4/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_3.3.3_defining_a_class_level1.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * In the Shop class, complete the function definition for SetYearsOpen() with
 * the integer parameter newYearsOpen.
 *
 * Ex: If the input is 14 43, then the output is:
 * Number of employees: 14
 * Years open: 43
 */
//************************************

#include <iostream>
using namespace std;

class Shop {
   public:
      void SetNumEmployees(int newNumEmployees);
      void SetYearsOpen(int newYearsOpen);
      int GetNumEmployees();
      int GetYearsOpen();
   private:
      int numEmployees;
      int yearsOpen;
};

void Shop::SetNumEmployees(int newNumEmployees) {
   numEmployees = newNumEmployees;
}

void Shop::SetYearsOpen(int newYearsOpen) {
   // Modified portion of code
   yearsOpen = newYearsOpen;
   // End modified portion of code
}

int Shop::GetNumEmployees() {
   return numEmployees;
}

int Shop::GetYearsOpen() {
   return yearsOpen;
}

int main() {
   Shop shop1;
   int inputNumEmployees;
   int inputYearsOpen;

   cin >> inputNumEmployees;
   cin >> inputYearsOpen;

   shop1.SetNumEmployees(inputNumEmployees);
   shop1.SetYearsOpen(inputYearsOpen);
   
   cout << "Number of employees: " << shop1.GetNumEmployees() << endl;
   cout << "Years open: " << shop1.GetYearsOpen() << endl;

   return 0;
}