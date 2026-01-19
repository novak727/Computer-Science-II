// ************************************
// Name: Devin Kennedy
// Co-authors: Ezzy Vielma, Ethan Mullins, Cameron Lindsey
// Date: 2/17/2025
// Course: CS255-01 - Computer Science II
// Description: Tests for Money class
// File name: Driver.cpp
// ************************************
#include "Money.h"

int main() {
	// Initialization Tests
	cout << "Intialization Tests" << endl;
	Money init1;
	cout << init1 << endl; // $0.00
	Money init2(3);
	cout << init2 << endl; // $3.00
	Money init3(3, 45);
	cout << init3 << endl; // $3.45

	cout << endl << endl;

	// Normalization Tests
	cout << "Normalization Tests" << endl;
	Money norm1(3, 45);
	cout << norm1 << endl; // $3.45
	Money norm2(1, 345);
	cout << norm2 << endl; // $4.45
	Money norm3(4, -345);
	cout << norm3 << endl; // $0.55

	cout << endl << endl;

	// Stream Tests
	cout << "Stream Tests" << endl;
	cout << Money(4, 0) << endl; // $4.00
	cout << Money(4, 1) << endl; // $4.01
	Money stream1, stream2;
	cout << "Enter money w/ $" << endl;
	cin >> stream1;
	cout << stream1 << endl;
	cout << "Enter money w/o $" << endl;
	cin >> stream2;
	cout << stream2 << endl;

	cout << endl << endl;

	// Arithmetic Tests
	cout << "Arithmetic Tests" << endl;
	Money ar1(4, 36);
	Money ar2(2, 60);

	cout << "v1: \t" << ar1 << endl;
	cout << "v2: \t" << ar2 << endl << endl;

	cout << "v1+v2:\t" << ar1 + ar2 << endl; // $6.96
	cout << "v1+4:\t" << ar1 + 4 << endl;   // $8.36
	cout << "5+v2:\t" << 5 + ar2 << endl << endl;   // $7.60

	cout << "v1-v2:\t" << ar1 - ar2 << endl; // $1.76
	cout << "v1-2:\t" << ar1 - 2 << endl;   // $2.36
	cout << "5-v2:\t" << 5 - ar2 << endl << endl;   // $2.40

	cout << "v1*v2:\t" << ar1 * ar2 << endl; // $11.34
	cout << "v1*3:\t" << ar1 * 3 << endl;   // $13.08
	cout << "4*v2:\t" << 4 * ar2 << endl << endl;   // $10.40

	cout << "v1/v2:\t" << ar1 / ar2 << endl; // $1.68
	cout << "v1/3:\t" << ar1 / 3 << endl;   // $1.45
	cout << "4/v2:\t" << 4 / ar2 << endl;   // $1.54

	cout << endl << endl;

	// Comparison Tests
	cout << "Comparison Tests" << endl;
	Money comp1(4, 30), comp2(3);

	cout << "comp1: \t" << comp1 << endl;
	cout << "comp2: \t" << comp2 << endl << endl;

	cout << "Equality " << endl;
	cout << "comp2 == comp2\t" << (comp2 == comp2) << endl;
	cout << "comp2 == 3\t" << (comp2 == 3) << endl;
	cout << "comp1 == comp2\t" << (comp1 == comp2) << endl;
	cout << "3 == comp1\t" << (3 == comp1) << endl;
	cout << endl; // 1100

	cout << "Less Than " << endl;
	cout << "comp2 < comp2\t" << (comp2 < comp2) << endl;
	cout << "comp2 < 3\t" << (comp2 < 3) << endl;
	cout << "comp2 < comp1\t" << (comp2 < comp1) << endl;
	cout << "5 < comp1\t" << (5 < comp1) << endl;
	cout << endl; // 0011

	cout << "Greater Than " << endl;
	cout << "comp2 > comp2\t" << (comp2 > comp2) << endl;
	cout << "comp2 > 3\t" << (comp2 > 3) << endl;
	cout << "comp1 > comp2\t" << (comp1 > comp2) << endl;
	cout << "5 > comp1\t" << (5 > comp1) << endl;
	cout << endl; // 0010

	cout << "Less Than or Equal " << endl;
	cout << "comp2 <= comp2\t" << (comp2 <= comp2) << endl;
	cout << "comp2 <= 3\t" << (comp2 <= 3) << endl;
	cout << "comp2 <= comp1\t" << (comp2 <= comp1) << endl;
	cout << "5 <= comp1\t" << (5 <= comp1) << endl;
	cout << endl; // 1111

	cout << "Greater Than or Equal " << endl;
	cout << "comp2 >= comp2\t" << (comp2 >= comp2) << endl;
	cout << "comp2 >= 3\t" << (comp2 >= 3) << endl;
	cout << "comp2 >= comp1\t" << (comp2 >= comp1) << endl;
	cout << "5 >= comp1\t" << (5 >= comp1) << endl;
	cout << endl; // 0010

	cout << "Not Equal " << endl;
	cout << "comp2 != comp2\t" << (comp2 != comp2) << endl;
	cout << "comp2 != 3\t" << (comp2 != 3) << endl;
	cout << "comp1 != comp2\t" << (comp1 != comp2) << endl;
	cout << "3 != comp1\t" << (3 != comp1) << endl;
	cout << endl; // 1100

	cout << endl << endl;

	// Increment/Decrement Tests
	cout << "Inc/Dec Operator" << endl;
	Money pre(4, 50), post(3, 20);

	// Prefix
	cout << "Pre Inc/Dec" << endl;
	cout << pre << endl;   // $4.50
	cout << ++pre << endl; // $5.50
	cout << pre << endl;   // $5.50
	cout << --pre << endl; // $4.50
	cout << pre << endl;   //$4.50

	// Postfix
	cout << "Post Inc/Dec" << endl;
	cout << post << endl;	// $3.20
	cout << post++ << endl; // $3.20
	cout << post << endl;	// $4.20
	cout << post-- << endl; // $4.20
	cout << post << endl;	//$3.20

	return 0;
}
