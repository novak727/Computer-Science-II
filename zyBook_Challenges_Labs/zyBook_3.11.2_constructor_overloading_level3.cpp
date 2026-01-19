//************************************
// Name: Devin Kennedy
// Date: 2/5/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_3.11.2_constructor_overloading_level3.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * The Animal class has a default constructor with no parameters. Define an
 * overloaded constructor that takes two string parameters and an integer
 * parameter for the type, the color, and the age of the animal.
 *
 * Ex: If the input is cheetah red 6, then the output is:
 * Animal: Undefined, Unspecified, -1
 * Animal: cheetah, red, 6
 */
//************************************

#include <iostream>
#include <string>
using namespace std;

class Animal {
   public:
      Animal();
      Animal(string animalType, string animalColor, int animalAge);
      void Print();
   
   private:
      string type;
      string color;
      int age;
};

// Default constructor
Animal::Animal() {
   type = "Undefined";
   color = "Unspecified";
   age = -1;
}

Animal::Animal(string animalType, string animalColor, int animalAge) {
   // Modified portion of code
   type = animalType;
   color = animalColor;
   age = animalAge;
   // End modified portion of code
}

void Animal::Print() {
   cout << "Animal: " << type << ", " << color << ", " << age << endl;
}

int main() {
   string animalType;
   string animalColor;
   int animalAge;
   
   cin >> animalType;
   cin >> animalColor;
   cin >> animalAge;
   
   Animal emptyAnimal;
   Animal animal1(animalType, animalColor, animalAge);
   
   emptyAnimal.Print();
   animal1.Print();

   return 0;
}