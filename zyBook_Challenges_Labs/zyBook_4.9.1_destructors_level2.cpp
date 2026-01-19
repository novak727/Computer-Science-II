//************************************
// Name: Devin Kennedy
// Date: 3/12/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_4.9.1_destructors_level2.cpp
//************************************

//************************************
// zyBook Challenge: 
/* The Park class has a data member, called grills, that is a dynamically
 * allocated array of Grill objects. Each Grill object has data members,
 * number and guests, representing the grill number of a reservation and the
 * number of guests. Define the Park class destructor to delete the data
 * member grills.
 */
//************************************

#include <iostream>
using namespace std;

class Grill {
   public:
      Grill();
      ~Grill();
      void Set(int grillNumber, int guestsExpected);
      void Print();
   private:
      int number;
      int guests;
};

Grill::Grill() {
   number = 0;
   guests = 0;
}

Grill::~Grill() {
   cout << "Destructor called on Grill (" << number << ", " << guests << ")" << endl;
}

void Grill::Set(int grillNumber, int guestsExpected) {
   number = grillNumber;
   guests = guestsExpected;
}

void Grill::Print() {
	cout << "Reserved grill #" << number << " for " << guests << " guests" << endl;
}

class Park {
   public:
      Park();
      ~Park();
      void SetSize(int numGrillsValue);
      void Reserve(int index, int grillNumber, int guestsExpected);
      void Print();
   private:
      int numGrills;
      Grill* grills;
};

Park::Park() {
   numGrills = 0;
   grills = nullptr;
}

Park::~Park() {
   // Modified portion of code
   delete[] grills;
   // End modified portion of code
}
void Park::SetSize(int numGrillsValue) {
   numGrills = numGrillsValue;
   if (numGrillsValue > 0) {
      grills = new Grill[numGrillsValue];
   }
}

void Park::Reserve(int index, int grillNumber, int guestsExpected) {
   grills[index].Set(grillNumber, guestsExpected);
}

void Park::Print() {
   int i;

   for (i = 0; i < numGrills; ++i) {
      grills[i].Print();
   }
}

void RunPark(int numGrillsValue) {
   Park park;
   int grillNumber;
   int guestsExpected;
   int i;
   
   park.SetSize(numGrillsValue);
   for (i = 0; i < numGrillsValue; ++i) {
      cin >> grillNumber;
      cin >> guestsExpected;
      park.Reserve(i, grillNumber, guestsExpected);
   }
   park.Print();
}

int main() {
   int numGrillsValue;

   cin >> numGrillsValue;

   RunPark(numGrillsValue);

   return 0;
}