//************************************
// Name: Devin Kennedy
// Date: 3/12/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_4.4.1_dynamically_allocating_objects_level1.cpp
//************************************

//************************************
// zyBook Challenge: 
/* Two integers are read from input as the age and the weight of a Cow
 * object. Assign pointer cowPtr with a new Cow object using the age and the
 * weight as arguments in that order.
 *
 * Ex: If the input is 1 547, then the output is:
 * Cow's age: 1
 * Cow's weight: 547
 */
//************************************

#include <iostream>
using namespace std;

class Cow {
   public:
      Cow(int ageValue, int weightValue);
      void Print();
   private:
      int age;
      int weight;
};

Cow::Cow(int ageValue, int weightValue) {
   age = ageValue;
   weight = weightValue;
}

void Cow::Print() {
   cout << "Cow's age: " << age << endl;
   cout << "Cow's weight: " << weight << endl;
}

int main() {
   Cow* cowPtr = nullptr;
   int ageVal;
   int weightVal;

   cin >> ageVal;
   cin >> weightVal;

   // Modified portion of code
   cowPtr = new Cow(ageVal, weightVal);
   // End modified portion of code

   cowPtr->Print();

   delete cowPtr;

   return 0;
}