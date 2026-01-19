#include "money.h"

int main()
{
	cout << "format:" << endl;
	cout << "{ACTUAL} {EXPECTED}" << endl;
	cout << endl;

	// Initialization Tests
	cout << "Initialization Tests" << endl;
	Money init1;
	cout << init1 << " " << "$0.00" << endl; // $0.00
	Money init2(3);
	cout << init2 << " " << "$3.00" << endl; // $3.00
	Money init3(3, 45);
	cout << init3 << " " << "$3.45" << endl; // $3.45

	cout << endl
		 << endl;

	// Normalization Tests
	cout << "Normalization Tests" << endl;
	Money norm1(3, 45);
	cout << norm1 << " " << "$3.45" << endl; // $3.45
	Money norm2(1, 345);
	cout << norm2 << " " << "$4.45" << endl; // $4.45
	Money norm3(4, -345);
	cout << norm3 << " " << "$0.55" << endl; // $0.55

	cout << endl
		 << endl;

	// Stream Tests
	cout << "Stream Tests" << endl;
	cout << Money(4, 0) << " " << "$4.00" << endl; // $4.00
	cout << Money(4, 1) << " " << "$4.01" << endl; // $4.01
	Money stream1, stream2;
	cout << "Enter money w/ $" << endl;
	cin >> stream1;
	cout << stream1 << endl;
	cout << "Enter money w/o $" << endl;
	cin >> stream2;
	cout << stream2 << endl;

	cout << endl
		 << endl;

	// Arithmetic Tests
	cout << "Arithmetic Tests" << endl;
	Money ar1(4, 36);
	Money ar2(2, 60);

	cout << ar1 + ar2 << " " << "$6.96" << endl; // $6.96
	cout << ar1 + 4 << " " << "$8.36" << endl;	 // $8.36
	cout << 5 + ar2 << " " << "$7.60" << endl;	 // $7.60

	cout << ar1 - ar2 << " " << "$1.76" << endl; // $1.76
	cout << ar1 - 2 << " " << "$2.36" << endl;	 // $2.36
	cout << 5 - ar2 << " " << "$2.40" << endl;	 // $2.40

	cout << ar1 * ar2 << " " << "$11.34" << endl; // $11.34
	cout << ar1 * 10 << " " << "$43.60" << endl;  // $43.60
	cout << ar2 * 4 << " " << "$10.40" << endl;	  // $10.40

	cout << ar1 / ar2 << " " << "$1.68" << endl; // $1.68
	cout << ar1 / 3 << " " << "$1.45" << endl;	 // $1.45
	cout << 4 / ar2 << " " << "$1.54" << endl;	 // $1.54

	cout << endl
		 << endl;

	// Comparison Tests
	cout << "Comparison Tests" << endl;
	Money comp1(4, 30), comp2(3), comp3(4, 90);
	cout << (comp2 == comp2)
		 << (comp2 == 3)
		 << (comp1 == comp2)
		 << (comp1 == 3)
		 << " 1100"
		 << endl; // 1100

	cout << (comp2 < comp2)
		 << (comp2 < 3)
		 << (comp2 < comp1)
		 << (comp1 < 5)
		 << " 0011"
		 << endl; // 0011

	cout << (comp2 > comp2)
		 << (comp2 > 3)
		 << (comp1 > comp2)
		 << (comp1 > 5)
		 << " 0010"
		 << endl; // 0010

	cout << (comp2 <= comp2)
		 << (comp2 <= 3)
		 << (comp2 <= comp1)
		 << (comp1 <= 5)
		 << " 1111"
		 << endl; // 1111

	cout << (comp2 >= comp2)
		 << (comp2 >= 3)
		 << (comp1 >= comp2)
		 << (comp1 >= 5)
		 << " 1110"
		 << endl; // 1110

	cout << (comp2 != comp2)
		 << (comp2 != 3)
		 << (comp2 != comp1)
		 << (comp1 != 5)
		 << " 0011"
		 << endl; // 0011

	cout << endl
		 << endl;

	cout << "Inc/Dec Operator" << endl;
	Money pre(4, 50), post(3, 20);

	cout << pre << " " << "$4.50" << endl;	 // $4.50
	cout << ++pre << " " << "$5.50" << endl; // $5.50
	cout << pre << " " << "$5.50" << endl;	 // $5.50
	cout << --pre << " " << "$4.50" << endl; // $4.50
	cout << pre << " " << "$4.50" << endl;	 //$4.50

	cout << post << " " << "$3.20" << endl;	  // $3.20
	cout << post++ << " " << "$3.20" << endl; // $3.20
	cout << post << " " << "$4.20" << endl;	  // $4.20
	cout << post-- << " " << "$4.20" << endl; // $4.20
	cout << post << " " << "$3.20" << endl;	  //$3.20

	return 0;
}
