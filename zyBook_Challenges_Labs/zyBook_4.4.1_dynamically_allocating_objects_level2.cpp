//************************************
// Name: Devin Kennedy
// Date: 3/12/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_4.4.1_dynamically_allocating_objects_level2.cpp
//************************************

//************************************
// zyBook Challenge: 
/* Two doubles are read from input as the age and the weight of a Turkey
 * object. Declare and assign pointer pTurkey with a new Turkey object using
 * the age and the weight as arguments in that order. Then, call pTurkey's
 * IncreaseAgeAndWeight() member function.
 *
 * Ex: If the input is 5.5 10.0, then the output is:
 *
 * Turkey's age and weight are increased.
 * Turkey's age: 38.5
 * Turkey's weight: 70.0
 */
//************************************

#include <iostream>
#include <iomanip>
using namespace std;

class Turkey {
   public:
      Turkey(double ageValue, double weightValue);
      void IncreaseAgeAndWeight();
      void Print();
   private:
      double age;
      double weight;
};

Turkey::Turkey(double ageValue, double weightValue) {
   age = ageValue;
   weight = weightValue;
}

void Turkey::IncreaseAgeAndWeight() {
	age = age * 7.0;
	weight = weight * 7.0;
   cout << "Turkey's age and weight are increased." << endl;
}

void Turkey::Print() {
   cout << "Turkey's age: " << fixed << setprecision(1) << age << endl;
   cout << "Turkey's weight: " << fixed << setprecision(1) << weight <<  endl;
}

int main() {

   double ageVal;
   double weightVal;

   cin >> ageVal;
   cin >> weightVal;

   // Modified portion of code
   Turkey* pTurkey = new Turkey(ageVal, weightVal);
   
   pTurkey->IncreaseAgeAndWeight();
   // End modified portion of code

   pTurkey->Print();

   delete pTurkey;

   return 0;
}