//************************************
// Name: Devin Kennedy
// Date: 2/20/2025
// Course: CS255-01 - Computer Science II
// Description: Class definitions for Car class
// File name: Car.h
//************************************
#include <iostream>
#include <iomanip>
#include <cmath>
#include "Car.h"
using namespace std;

// Received from user input
void Car::SetModelYear(int userYear){
   modelYear = userYear;
}

int Car::GetModelYear() const {
   return modelYear;
}

// Received from user input
void Car::SetPurchasePrice(int userPrice) {
    purchasePrice = userPrice;
}

int Car::GetPurchasePrice() const {
    return purchasePrice;
}

void Car::CalcCurrentValue(int currentYear) {
   double depreciationRate = 0.15;
   int carAge = currentYear - modelYear;
      
   // Car depreciation formula
   currentValue = purchasePrice * pow((1 - depreciationRate), carAge);
}

// Print provided car information and calculated current car value
void Car::PrintInfo() const {
    cout << "Car's information:" << endl;
    cout << "  Model year: " << GetModelYear() << endl;
    cout << "  Purchase price: $" << GetPurchasePrice() << endl;
    cout << "  Current value: $" << fixed << setprecision(0) << currentValue << endl;
}