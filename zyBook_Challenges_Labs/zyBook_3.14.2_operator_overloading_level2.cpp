//************************************
// Name: Devin Kennedy
// Date: 2/5/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_3.14.2_operator_overloading_level2.cpp
//************************************

//************************************
// zyBook Challenge: 

/*
 * Four integers are read from input, where the first two integers are the feet
 * and inches of length1 and the second two integers are the feet and inches of
 * length2. Define the function to overload the + operator.
 *
 * Ex: If the input is 10 4 4 2, then the output is:
 * 10 feet, 4 inches
 * 4 feet, 2 inches
 * Sum: 14 feet, 6 inches
 *
 * Note: The sum of two lengths is:
 * the sum of the number of feet
 * the sum of the number of inches
 */
 //************************************

#include <iostream>
using namespace std;

class Length {
   public:
      Length(int ft = 0, int in = 0);
      void Print() const;
      Length operator+(Length rhs);
   private:
      int feet;
      int inches;
};

Length::Length(int ft, int in) {
   feet = ft;
   inches = in;
}

// No need to accommodate for overflow or negative values

// Modified portion of code
Length Length::operator+(Length rhs) {
   Length retval;
   
   retval.feet = feet + rhs.feet;
   retval.inches = inches + rhs.inches;
   
   return retval;
}
// End modified portion of code

void Length::Print() const {
   cout << feet << " feet, " << inches << " inches";
}

int main() {
   int ft1;
	int in1;
	int ft2;
	int in2;
   
   cin >> ft1;
	cin >> in1;
	cin >> ft2;
	cin >> in2;
   
   Length length1(ft1, in1);
	Length length2(ft2, in2);
   
   Length sum = length1 + length2;
   
   length1.Print();
	cout << endl;
	length2.Print();
	cout << endl;
	cout << "Sum: ";
	sum.Print();
	cout << endl;
   
   return 0;
}