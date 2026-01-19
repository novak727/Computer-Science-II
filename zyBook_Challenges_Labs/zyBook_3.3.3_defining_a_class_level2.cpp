//************************************
// Name: Devin Kennedy
// Date: 2/4/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_3.3.3_defining_a_class_level2.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * In the Mouse class, declare the following public member functions:
 * SetColor() with one string parameter
 * SetName() with one string parameter
 * SetAge() with one integer parameter
 *
 * and the following private data members:
 * string color
 * string name
 * integer age
 *
 * Ex: If the input is white Fay 1, then the output is:
 * Color: white
 * Name: Fay
 * Age: 1
 */
//************************************

#include <iostream>
using namespace std;

class Mouse {
   public:
      string GetColor();
      string GetName();
      int GetAge();
   // Modified portion of code
      void SetColor(string customColor);
      void SetName(string CustomName);
      void SetAge(int customAge);
   private:
      string color;
      string name;
      int age;
   // End modified portion of code
};

void Mouse::SetColor(string customColor) {
   color = customColor;
}

void Mouse::SetName(string customName) {
	name = customName;
}

void Mouse::SetAge(int customAge) {   
   age = customAge;
}

string Mouse::GetColor() {
   return color;
}

string Mouse::GetName() {
	return name;
}

int Mouse::GetAge() {
   return age;
}

int main() {
   Mouse mouse1;
   string userColor;
   string userName;
   int userAge;

   cin >> userColor;
   cin >> userName;
   cin >> userAge;

   mouse1.SetColor(userColor);
   mouse1.SetName(userName);
   mouse1.SetAge(userAge);
   
   cout << "Color: " << mouse1.GetColor() << endl;
   cout << "Name: " << mouse1.GetName() << endl;
   cout << "Age: " << mouse1.GetAge() << endl;

   return 0;
}