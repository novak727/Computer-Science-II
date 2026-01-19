//************************************
// Name: Devin Kennedy
// Date: 2/5/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_3.12.2_constructor_initializer_lists_level1.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Add a constructor initializer list to the default Recruit constructor to
 * initialize shortName with "Unspecified", experience with -1, and partTime
 * with '?'.
 *
 * Ex: If the input is Mai 10 Y, then the output is:
 * Recruit: Unspecified, Experience: -1, Part Time: ?
 * Recruit: Mai, Experience: 10, Part Time: Y
 */
//************************************

#include <iostream>
using namespace std;

class Recruit {
   public:
      Recruit();
      void SetFields(string newShortName, int newExperience, char newPartTime);
      void Print() const;
   private:
      string shortName;
      int experience;
      char partTime;
};

// Modified portion of code
Recruit::Recruit() : shortName("Unspecified"), experience(-1), partTime('?') {
}
// End modified portion of code

void Recruit::SetFields(string newShortName, int newExperience, char newPartTime) {
   shortName = newShortName;
   experience = newExperience;
   partTime = newPartTime;
}

void Recruit::Print() const {
   cout << "Recruit: " << shortName << ", Experience: " << experience << ", Part Time: " << partTime << endl;
}

int main() {
   string newShortName;
   int newExperience;
   char newPartTime;
   Recruit myRecruit;
  
   myRecruit.Print();
  
   cin >> newShortName;
   cin >> newExperience;
   cin >> newPartTime;
   myRecruit.SetFields(newShortName, newExperience, newPartTime);
   myRecruit.Print();
  
   return 0;
}