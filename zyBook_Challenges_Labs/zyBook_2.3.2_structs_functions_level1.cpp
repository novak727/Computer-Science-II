//************************************
// Name: Devin Kennedy
// Date: 1/16/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_2.3.2_structs_functions_level1.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Write a statement that calls the function IncreaseItemQty with parameters
 * notebookInfo and addStock. Assign notebookInfo with the value returned.
*/
//************************************

#include <iostream>
#include <string>
using namespace std;

struct ProductInfo {
   string itemName;
   int itemQty;
};

ProductInfo IncreaseItemQty(ProductInfo productToStock, int increaseValue) {
   productToStock.itemQty = productToStock.itemQty + increaseValue;

   return productToStock;
}

int main() {
   ProductInfo notebookInfo;
   int addStock;

   cin >> notebookInfo.itemName >> notebookInfo.itemQty;
   cin >> addStock;

   // Modified portion of code
   notebookInfo = IncreaseItemQty(notebookInfo, addStock);
   // End modified portion of code

   cout << "Name: " << notebookInfo.itemName << ", stock: " << notebookInfo.itemQty << endl;

   return 0;
}