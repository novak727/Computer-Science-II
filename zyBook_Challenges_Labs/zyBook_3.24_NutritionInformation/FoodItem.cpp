//************************************
// Name: Devin Kennedy
// Date: 2/21/2025
// Course: CS255-01 - Computer Science II
// Description: Class definitions for FoodItem class
// File name: FoodItem.cpp
//************************************
#include "FoodItem.h"
#include <iostream>
#include <iomanip> 

using namespace std;

// Default constructor
FoodItem::FoodItem() {
	name = "Water";
	fat = 0.0;
	carbs = 0.0;
	protein = 0.0;
}
// Constructor with parameters for initialization
FoodItem::FoodItem(string foodName, double gramsFat, double gramsCarbs, double gramsProtein) {
	name = foodName;
	fat = gramsFat;
	carbs = gramsCarbs;
	protein = gramsProtein;
}
string FoodItem::GetName() {
   return name;
}

double FoodItem::GetFat() {
   return fat;
}

double FoodItem::GetCarbs() {
   return carbs;
}

double FoodItem::GetProtein() {
   return protein;
}

double FoodItem::GetCalories(double numServings) {
   // Calorie formula
   double calories = ((fat * 9) + (carbs * 4) + (protein * 4)) * numServings;
   return calories;
}

void FoodItem::PrintInfo() {
   cout << fixed << setprecision(2);
   cout << "Nutritional information per serving of " << name  << ":" << endl;
   cout << "  Fat: " << fat << " g" << endl;
   cout << "  Carbohydrates: " << carbs << " g" << endl;
   cout << "  Protein: " << protein << " g" << endl;
}