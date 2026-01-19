//************************************
// Name: Devin Kennedy
// Date: 2/20/2025
// Course: CS255-01 - Computer Science II
// Description: Class declarations for Car class
// File name: Car.h
//************************************
#ifndef CARH
#define CARH

class Car {
   private:
      // Class member variables
      int modelYear; 
      int purchasePrice;
      double currentValue;
   
   public:
      // Class methods
      void SetModelYear(int userYear);

      int GetModelYear() const;
   
      void SetPurchasePrice(int userPrice);

      int GetPurchasePrice() const;
      void CalcCurrentValue(int currentYear);
   
      void PrintInfo() const;
   
};

#endif