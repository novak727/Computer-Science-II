//************************************
// Name: Devin Kennedy
// Date: 2/5/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_3.14.2_operator_overloading_level3.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Four doubles are read from input, where the first two doubles are the liters
 * and milliliters of volume1 and the second two doubles are the liters and
 * milliliters of volume2. Define two functions to overload the + operator. The
 * first function overloads the + operator to add a volume and a double
 * representing the number of liters. The second function overloads the +
 * operator to add two volumes.
 *
 * Ex: If the input is 11.0 356.0 7.0 182.0, then the output is:
 * 11 liters, 356 milliliters
 * 7 liters
 * Sum: 18 liters, 356 milliliters
 *
 * 11 liters, 356 milliliters
 * 7 liters, 182 milliliters
 * Sum: 18 liters, 538 milliliters
 *
 * Note: The sum of a volume and a double representing the number of liters is:
 * the sum of the number of liters and the double
 * the number of milliliters is unchanged
 *
 * Note: The sum of two volumes is:
 * the sum of the number of liters
 * the sum of the number of milliliters
 */
//************************************

#include <iostream>
using namespace std;

class Volume {
   public:
      Volume(double liters = 0.0, double milliliters = 0.0);
      void Print() const;
      Volume operator+(double rhs);
      Volume operator+(Volume rhs);
   private:
      double numLiters;
      double numMilliliters;
};

Volume::Volume(double liters, double milliliters) {
   numLiters = liters;
   numMilliliters = milliliters;
}

// No need to accommodate for overflow or negative values

// Modified portion of code
Volume Volume::operator+(double rhs) {
   Volume retval;
   
   retval.numLiters = numLiters + rhs;
   retval.numMilliliters = numMilliliters;
   
   return retval;
}

Volume Volume::operator+(Volume rhs) {
   Volume retval;
   
   retval.numLiters = numLiters + rhs.numLiters;
   retval.numMilliliters = numMilliliters + rhs.numMilliliters;
   
   return retval;
}
// End modified portion of code

void Volume::Print() const {
   cout << numLiters << " liters, " << numMilliliters << " milliliters";
}

int main() {
   double liters1;
	double milliliters1;
	double liters2;
	double milliliters2;
   
   cin >> liters1;
	cin >> milliliters1;
	cin >> liters2;
	cin >> milliliters2;
   
   Volume volume1(liters1, milliliters1);
   Volume volume2(liters2, milliliters2);
   
   Volume sum1 = volume1 + liters2;
   Volume sum2 = volume1 + volume2;
   
   volume1.Print();
	cout << endl;
	cout << liters2 << " liters" << endl;
	cout << "Sum: ";
	sum1.Print();
	cout << endl;
   
   cout << endl;
   
   volume1.Print();
	cout << endl;
	volume2.Print();
	cout << endl;
	cout << "Sum: ";
	sum2.Print();
	cout << endl;
   
   return 0;
}