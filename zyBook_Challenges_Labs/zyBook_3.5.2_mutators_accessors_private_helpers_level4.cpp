//************************************
// Name: Devin Kennedy
// Date: 2/4/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_3.5.2_mutators_accessors_private_helpers_level4.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Define a private helper function called ConvertToPounds() that converts the
 * data member ounces to pounds and returns a double.
 *
 * Ex: If the input is 848.0, then the output is:
 * 53.0 pounds
 *
 * Note: The equation to convert from ounces to pounds is: pounds = ounces / 16
 */
//************************************

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Weight {
   public:
      void SetOunces(double weightOunces);      
      double GetOunces() const;                        
      void PrintInPounds();
   private:
      double ounces;
      double ConvertToPounds();
};

void Weight::SetOunces(double weightOunces) {
   ounces = weightOunces;
}

double Weight::GetOunces() const {
   return ounces;
}

double Weight::ConvertToPounds() {
   // Modified portion of code
   return ounces / 16;
   // End modified portion of code
}

void Weight::PrintInPounds() {
   cout << fixed << setprecision(1) << ConvertToPounds() << " pounds" << endl;
}

int main() {
   Weight weight1;
   double inputOunces;

   cin >> inputOunces;
   weight1.SetOunces(inputOunces);

   weight1.PrintInPounds();

   return 0;
}