//************************************
// Name: Devin Kennedy
// Date: 2/4/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_3.5.2_mutators_accessors_private_helpers_level1.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Define the Restaurant class's SetName() mutator that sets data member name
 * to restaurantName, followed by "'s Bakery", and the SetCity() mutator that
 * sets data member city to restaurantCity.
 *
 * Ex: If the input is:
 * Mai
 * Dover
 *
 * then the output is:
 * Restaurant: Mai's Bakery
 * City: Dover
 */
//************************************

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Restaurant {
   public:
      void SetName(string restaurantName);      
      void SetCity(string restaurantCity);     
      void Print() const;   
   private:
      string name;
      string city;
};

void Restaurant::SetName(string restaurantName) {
   // Modified portion of code
   name = restaurantName + "'s Bakery";
   // End modified portion of code
}

void Restaurant::SetCity(string restaurantCity) {
   city = restaurantCity;
}

void Restaurant::Print() const {
   cout << "Restaurant: " << name << endl;
   cout << "City: " << city << endl;
}

int main() {
   Restaurant restaurant;
   string inputName;
   string inputCity;

   cin >> inputName;
   cin >> inputCity;
   restaurant.SetName(inputName);
   restaurant.SetCity(inputCity);

   restaurant.Print();

   return 0;
}