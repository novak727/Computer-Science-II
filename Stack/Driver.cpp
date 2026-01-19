#include "Stack.h"

int main() {
	Stack s;
	int val;
	cout << "Enter val: " << endl;
	cin >> val;
	while (val > -100) {
		if (s.Push(val))
			s.Print();
		else
			cout << "STACK IS FULL" << endl;
		cout << "Enter val: " << endl;
		cin >> val;
	}
	cout << "Enter 1 to continue, -1 to stop: ";
	cin >> val;

	while (val > -1) {
		if (s.Pop(val)) {
			cout << val << " was popped" << endl;
			s.Print();
		}
		else
			cout << "STACK IS EMPTY" << endl;
		cout << "Enter 1 to continue, -1 to stop: ";
		cin >> val;
	}
	return 0;
}
