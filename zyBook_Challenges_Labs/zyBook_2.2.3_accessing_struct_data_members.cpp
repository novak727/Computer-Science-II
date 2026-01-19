//************************************
// Name: Devin Kennedy
// Date: 1/16/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_2.2.3_accessing_struct_data_members.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Write a statement to print the data members of InventoryTag. End with
 * newline. Ex: if itemID is 314 and quantityRemaining is 500, print:
 *
 * Inventory ID: 314, Qty: 500
 */
//************************************

#include <iostream>
using namespace std;

struct InventoryTag {
   int itemID;
   int quantityRemaining;
};

int main() {
   InventoryTag redSweater;

   cin >> redSweater.itemID;
   cin >> redSweater.quantityRemaining;
   
   // Modified portion of code
   cout << "Inventory ID: " << redSweater.itemID << ", Qty: " <<
      redSweater.quantityRemaining << endl;
   // End modified portion of code

   return 0;
}