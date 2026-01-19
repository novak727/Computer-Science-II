//************************************
// Name: Devin Kennedy
// Date: 2/5/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_3.12.2_constructor_initializer_lists_level2.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Add a constructor initializer list to the overloaded constructor
 * Candidate(string newShortName, int newExperience, char newFullTime) to
 * initialize shortName with newShortName, experience with newExperience, and
 * fullTime with newFullTime.
 *
 * Ex: If the input is Aya 2 N, then the output is:
 * Candidate: Unknown, Experience: -10, Full Time: -
 * Candidate: Aya, Experience: 2, Full Time: N
 */
//************************************

#include <iostream>
using namespace std;

class Candidate {
   public:
      Candidate();
      Candidate(string newShortName, int newExperience, char newFullTime);
      void Print() const;
   private:
      string shortName;
      int experience;
      char fullTime;
};

Candidate::Candidate() : shortName("Unknown"), experience(-10), fullTime('-') {
}

// Modified portion of code
Candidate::Candidate(string newShortName, int newExperience, char newFullTime) : shortName(newShortName), experience(newExperience), fullTime(newFullTime) {
}
// End modified portion of code

void Candidate::Print() const {
   cout << "Candidate: " << shortName << ", Experience: " << experience << ", Full Time: " << fullTime << endl;
}

int main() {
   Candidate myCandidate;
   string newShortName;
   int newExperience;
   char newFullTime;
  
   cin >> newShortName;
   cin >> newExperience;
   cin >> newFullTime;
   Candidate yourCandidate(newShortName, newExperience, newFullTime);

   myCandidate.Print();
   yourCandidate.Print();
  
   return 0;
} 