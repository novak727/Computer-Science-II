#include "LL.h"

int main1() {
	LL l1;
	l1.Insert(20);
	l1.Print(); cout << endl;

	l1.Insert(45);
	l1.Print(); cout << endl;

	l1.Insert(100);
	l1.Print(); cout << endl;

	l1.Insert(75);
	l1.Print(); cout << endl;

	l1.Insert(100);
	l1.Print(); cout << endl;

	Node* temp = l1.Search(20);
	cout << "20: " <<  temp << endl;
	temp = l1.Search(45);
	cout << "45: " << temp << endl;
	temp = l1.Search(75);
	cout << "75: " << temp << endl;
	temp = l1.Search(100);
	cout << "100: " << temp << endl;
	temp = l1.Search(75);
	cout << "75: " << temp << endl;
	temp = l1.Search(15);
	cout << "15: " << temp << endl;
	temp = l1.Search(150);
	cout << "150: " << temp << endl;

	float avg = l1.GetAverage();
	cout << "Avg: " << avg << endl << endl;

	l1.Remove(75);
	l1.Print(); cout << endl;

	l1.Remove(84593);
	l1.Print(); cout << endl;

	return 0;
}
