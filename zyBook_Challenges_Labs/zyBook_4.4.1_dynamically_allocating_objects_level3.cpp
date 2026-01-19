//************************************
// Name: Devin Kennedy
// Date: 3/12/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_4.4.1_dynamically_allocating_objects_level3.cpp
//************************************

//************************************
// zyBook Challenge: 

/* Assign pointer pCat with a new Cat object. Call pCat's Read() to read the
 * object's data members from input. Then, call pCat's Print() to output the
 * values of the data members. Finally, delete pCat.
 *
 * Ex: If the input is 4.5 5.0, then the output is:
 *
 * Cat's age: 4.5
 * Cat's weight: 5.0
 */
//************************************

#include <iostream>
#include <iomanip>
using namespace std;

class Cat {
   public:
      Cat();
      void Read();
      void Print();
   private:
      double age;
      double weight;
};

Cat::Cat() {
   age = 0.0;
   weight = 0.0;
}

void Cat::Read() {
   cin >> age;
   cin >> weight;
}

void Cat::Print() {
   cout << "Cat's age: " << fixed << setprecision(1) << age << endl;
   cout << "Cat's weight: " << fixed << setprecision(1) << weight << endl;
}

int main() {
   Cat* pCat = nullptr;

   // Modified portion of code
   pCat = new Cat();
   pCat->Read();
   pCat->Print();
   delete pCat;
   // End modified portion of code

   return 0;
}