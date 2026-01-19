// **************************************
// Jenkins Driver
// **************************************
#include "LL.h"
int GetChoice();

int main() {
	LL l1;
	int choice = 0;
	choice = GetChoice();
	while (choice != 0) {
		switch (choice) {
			case 1:
			{
				int val = 0;
				cout << "val? ";
				cin >> val;
				if (l1.Insert(val))
					cout << val << " inserted" << endl;
				else
					cout << val << " insert failed" << endl;
				break;
			}
			case 2:
			{
				int val = 0;
				cout << "val? ";
				cin >> val;
				Node* found = l1.Search(val);
				if (found == nullptr)
					cout << val << " not found." << endl;
				else
					cout << val << " found at " << found << endl;
				break;
			}
			case 3:
			{
				cout << "Average is " << l1.GetAverage() << endl;
				break;
			}
			case 4:
			{
				int val = 0;
				cout << "val? ";
				cin >> val;
				if (l1.Remove(val))
					cout << val << " removed" << endl;
				else
					cout << val << " remove failed" << endl;
				cout << "REMOVE" << endl;
				break;
			}
			case 5:
			{
				if (l1.Copy())
					cout << "Copy successful" << endl;
				else
					cout << "Copy failed" << endl;
				break;
			}
			default:
				cout << "Invalid Option. Choose again." << endl;
		} //end switch
		cout << "************" << endl;
		l1.Print();
		cout << "************" << endl;
		choice = GetChoice();
	}


	return 0;
}

int GetChoice() {
	int input=0;
	cout << "Enter an option" << endl;
	cout << "1: Insert" << endl;
	cout << "2: Search" << endl;
	cout << "3: GetAverage" << endl;
	cout << "4: Remove" << endl;
	cout << "5: Copy List" << endl;
	cout << "0: Exit" << endl;
	cin >> input;
	return input;
}