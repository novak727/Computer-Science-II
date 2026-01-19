//************************************
// Name: Devin Kennedy
// Date: 2/5/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_3.13.2_this_implicit_parameter.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Define the missing member function. Use "this" to distinguish the local
 * member from the parameter name.
 */
//************************************

#include <iostream>
using namespace std;

class CablePlan{
   public:
      void  SetNumDays(int numDays);
      int   GetNumDays() const;
   private:
      int   numDays;
};

// FIXME: Define SetNumDays() member function, using "this" implicit parameter.
void CablePlan::SetNumDays(int numDays) {
   // Modified portion of code
   this->numDays = numDays;
   // End modified portion of code
}

int CablePlan::GetNumDays() const {
   return numDays;
}

int main() {
   CablePlan house1Plan;
   int userNum;

   cin >> userNum;
   house1Plan.SetNumDays(userNum);
   cout << house1Plan.GetNumDays() << endl;

   return 0;
}