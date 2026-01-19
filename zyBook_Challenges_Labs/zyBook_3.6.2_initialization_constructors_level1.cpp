//************************************
// Name: Devin Kennedy
// Date: 2/4/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_3.6.2_initialization_constructors_level1.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * In the class definition, initialize the data members, string name, integer
 * age, and string type, with the default values "Void", 1, and "Void",
 * respectively.
 *
 * Ex: If the input is Rob 20 wasp, then the output is:
 * Name: Void, Age: 1, Type: Void
 * Name: Rob, Age: 20, Type: wasp
 *
 * Note: The class's print function is called first after the default
 * constructor, then again after the inputs are passed to the setters.
 */
//************************************

#include <iostream>
#include <string>
using namespace std;

class Animal {
   public:
      void SetName(string animalName);
		void SetAge(int animalAge);
		void SetType(string animalType);
      void Print();

   private:
      // Modified portion of code
      string name = "Void";
      int age = 1;
      string type = "Void";
	  // End modified portion of code
};

void Animal::SetName(string animalName) {
	name = animalName;
}

void Animal::SetAge(int animalAge) {
	age = animalAge;
}

void Animal::SetType(string animalType) {
	type = animalType;
}

void Animal::Print() {
   cout << "Name: " << name << ", Age: " << age << ", Type: " << type << endl;
}

int main() {
   string newName;
	int newAge;
	string newType;
   Animal animal1;

   animal1.Print();

   cin >> newName;
	cin >> newAge;
	cin >> newType;

   animal1.SetName(newName);
	animal1.SetAge(newAge);
	animal1.SetType(newType);

   animal1.Print();

   return 0;
}