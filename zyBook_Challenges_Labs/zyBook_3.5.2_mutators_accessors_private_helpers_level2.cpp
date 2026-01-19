//************************************
// Name: Devin Kennedy
// Date: 2/4/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_3.5.2_mutators_accessors_private_helpers_level2.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Define the Animal class's GetSpecies() accessor that gets data member
 * species and the GetColor() accessor that gets data member color.
 *
 * Ex: If the input is:
 * cow
 * magenta
 *
 * then the output is:
 * Animal: cow
 * Color: magenta
 */
//************************************

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Animal {
   public:
      void SetSpecies(string animalSpecies);      
      void SetColor(string animalColor);      
      string GetSpecies() const;     
      string GetColor() const;        
   private:
      string species;
      string color;
};

void Animal::SetSpecies(string animalSpecies) {
   species = animalSpecies;
}

void Animal::SetColor(string animalColor) {
   color = animalColor;
}

string Animal::GetSpecies() const {
   // Modified portion of code
   return species;
   // End modified portion of code
}

string Animal::GetColor() const {
   // Modified portion of code
   return color;
   // End modified portion of code
}

int main() {
   Animal animal;
   string inputSpecies;
   string inputColor;

   cin >> inputSpecies;
   cin >> inputColor;
   animal.SetSpecies(inputSpecies);
   animal.SetColor(inputColor);

   cout << "Animal: " << animal.GetSpecies() << endl;
   cout << "Color: " << animal.GetColor() << endl;

   return 0;
}