//************************************
// Name: Devin Kennedy
// Date: 2/5/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_3.12.2_constructor_initializer_lists_level3.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Add a constructor initializer list to the default constructor Experiment() to
 * initialize units with "Empty" and measurements with a vector of size 4.
 *
 * Ex: If the input is gram 73 32 10 39, then the output is:
 * Experiment: Empty, 4 measurements: 0, 0, 0, 0
 * Experiment: gram, 4 measurements: 73, 32, 10, 39
 */
//************************************

#include <iostream>
#include <vector>
using namespace std;

class Experiment {
   public:
      Experiment();
      void ReadUnits();
      void ReadMeasurements();
      void Print() const;
   private:
      string units;
      vector<int> measurements; 
};

// Modified portion of code
Experiment::Experiment() : units("Empty"), measurements(4) {
}
// End modified portion of code

void Experiment::ReadUnits() {
   cin >> units;
}

void Experiment::ReadMeasurements() {
   int i;
   for (i = 0; i < measurements.size(); ++i) {
      cin >> measurements.at(i);
   }
}

void Experiment::Print() const {
   int i;
  
   cout << "Experiment: " << units << ", ";
   if (measurements.size() == 0) {
      cout << "No measurements" << endl;
   }
   else {
      cout << measurements.size() << " measurements: ";
      for (i = 0; i < measurements.size() - 1; ++i) {
         cout << measurements.at(i) << ", ";
      }
      cout << measurements.at(measurements.size() - 1) << endl;
   }
}

int main() {
   string units;
   Experiment myExperiment;

   myExperiment.Print();

   myExperiment.ReadUnits();
	myExperiment.ReadMeasurements();
	myExperiment.Print();
   
   return 0;
}