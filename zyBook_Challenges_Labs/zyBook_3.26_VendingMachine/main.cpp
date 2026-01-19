//************************************
// Name: Devin Kennedy
// Date: 2/21/2025
// Course: CS255-01 - Computer Science II
// Description: 
// File name: main.cpp
//************************************
#include <iostream>

#include "VendingMachine.h"
using namespace std;

int main() {
    // variables for user input
	int purchase = 0;
	int restock = 0;

	cin >> purchase >> restock;

	// VendingMachine variable
	VendingMachine vendingMachine;

	// purchase (subtract) number of bottles from first user input
	vendingMachine.Purchase(purchase);

	// restock (add) number of bottles from second user input
	vendingMachine.Restock(restock);

	// Read in 3rd input over original purchase number
	cin >> purchase;

	// purchase (subtract) number of bottles from third user input
	vendingMachine.Purchase(purchase);

	// print out number of bottles left
	vendingMachine.Report();
	
	return 0;
}
