// ************************************
// Name: Devin Kennedy
// Co-authors: Sarah Evett, Campbell Gooch
// Date: 4/21/2025
// Course: CS255-01 - Computer Science II
// Description: Driver for BST class
// File name: Driver.cpp
// ************************************

#include "BST.h"

// Function Declaration
int Options();

int main() {
	BST b;
	int choice = 0;
	choice = Options();
	while (choice != 0) {
		switch (choice) {
		case 1:
		{
			int val = 0;
			cout << "Enter an integer: ";
			cin >> val;
			b.Insert(val);
			break;
		}
		case 2:
		{
			b.PrintInOrder(); cout << endl;
			break;
		}
		case 3:
		{
			b.PrintPreOrder(); cout << endl;
			break;
		}
		case 4:
		{
			b.PrintPostOrder(); cout << endl;
			break;
		}
		case 5:
		{
			cout << "Number of items: " << b.Count() << endl;
			break;
		}
		default:
			cout << "Invalid Option. Choose again." << endl;
		}
		choice = Options();
	}

	return 0;
}

// Basic menu to retrieve input from user for what they want to do
int Options(){
	int input = 0;
	cout << "Enter an option" << endl;
	cout << "1: Insert" << endl;
	cout << "2: Print Inorder" << endl;
	cout << "3: Print Preorder" << endl;
	cout << "4: Print Postorder" << endl;
	cout << "5: Count" << endl;
	cout << "0: Exit" << endl;
	cin >> input;
	return input;
}
