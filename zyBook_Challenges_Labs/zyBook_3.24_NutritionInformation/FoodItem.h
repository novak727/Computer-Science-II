//************************************
// Name: Devin Kennedy
// Date: 2/21/2025
// Course: CS255-01 - Computer Science II
// Description: Class declarations for FoodItem class
// File name: FoodItem.h
//************************************
#ifndef FOODITEMH
#define FOODITEMH

#include <string>

using namespace std;

class FoodItem {
   public:
      // Default constructor
      FoodItem();
      // Constructor with parameters for initialization
      FoodItem(string foodName, double gramsFat, double gramsCarbs, double gramsProtein);
      string GetName();

      double GetFat();

      double GetCarbs();

      double GetProtein();

      double GetCalories(double numServings);

      void PrintInfo();

   private:
      string name;
      double fat;
      double carbs;
      double protein;
};

#endif