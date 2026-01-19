// ************************************
// Name: Devin Kennedy
// Co-authors: Ezzy Vielma, Ethan Mullins, Cameron Lindsey
// Date: 2/17/2025
// Course: CS255-01 - Computer Science II
// Description: Money class operator overloading definitions
// File name: Money.cpp
// ************************************
#include "Money.h"

// Initializers
Money::Money() : dol(0), cent(0) {}
Money::Money(int d) : dol(d), cent(0) {}
Money::Money(int d, int c) : dol(d), cent(c) {
	Normalize();
}

// Fixes Money when cent value is negative or 100+
void Money::Normalize() {
	// Normalize cent > 100
	int temp = cent / 100;
	cent %= 100;
	dol += temp;

	// Normalize cent < 100
	// Cent will be in range -99 to 99 inclusive
	if (cent < 0) {
		/* Negative cents can be normalized by "borrowing"
		 * from the dollars. Dec dol to borrow from it,
		 * increasing cent by 100 in the process. This
		 * puts cent into the range 0 to 99 inclusive.
		 */
		cent += 100;
		dol--;
	}
}

/* Output stream overloading.
 * Prints out in money format, accounting for when cents value is
 * a single digit number.
 */
ostream& operator<<(ostream& os, const Money& m) {
	os << '$' << m.dol << '.';
	if (m.cent <= 9)
		os << '0';
	os << m.cent;
	return os;
}

/* Input stream overloading.
 * Accounts for whether or not user enters the $ symbol when entering their money value.
 */
istream& operator>>(istream& is, Money& m) {
	char dummy;
	is >> dummy;

	if (dummy != '$') // Is $ included?
	{
		/* $ not included, char in dummy should be
		 * first digit of number that must now be
		 * manually pulled from stream.
		 */
		string temp;

		do
		{
			/* Until we hit '.' marking end of dollars :
			 * 1. add char in dummy to temp string.
			 * 2. Store next char from stream in dummy.
			 */
			temp += dummy;
			is >> dummy;
		} while (dummy != '.');
		
		// Convert numeric temp string to int for dollars.
		m.dol = stoi(temp);
	}
	else
	{
		// $ is included, dollar part of stream is still
		// valid, meaning it can be pulled directly into m.dol
		is >> m.dol;
		// Clear decimal

		/* Decimal must be cleared inside else block to
		 * keep stream state consistent regardless of
		 * which condition gets taken.
		 */
		is >> dummy;
	}

	is >> m.cent;
	m.Normalize();
	return is;
}

/* Addition operator overloading to add 2 Moneys or 1 Money and an integer.
 * Integer is assumed to be a dollar value.
 */
Money operator+(const Money& l, const Money& r) {
	return Money(l.dol + r.dol, l.cent + r.cent);
}
Money operator+(const Money& l, const int& r) {
	return Money(l.dol + r, l.cent);
}
Money operator+(const int& l, const Money& r) {
	return Money(l + r.dol, r.cent);
}

/* Subtraction operator overloading to subtract 2 Moneys or 1 Money and an integer.
 * Integer is assumed to be a dollar value.
 */
Money operator-(const Money& l, const Money& r) {
	return Money(l.dol - r.dol, l.cent - r.cent);
}
Money operator-(const Money& l, const int& r) {
	return Money(l.dol - r, l.cent);
}
Money operator-(const int& l, const Money& r) {
	return Money(l - r.dol - 1, 100 - r.cent);
}

/* Mulitplication operator overloading to multiply 2 Moneys or 1 Money and an integer.
 * Integer is assumed to be a dollar value.
 */
Money operator*(const Money& l, const Money& r) {
	// Convert to total cents, multiply both together, then
	// convert back to dollars, cent, rounding in the process.
	long long lTotCents = 100 * l.dol + l.cent;
	long long rTotCents = 100 * r.dol + r.cent;
	int total = lTotCents * rTotCents / 10;
	
	int dollars = total / 1000;
	int cents = total % 1000;
	
	/* Round cents to nearest 100, then divide by 100.
	 * Cent is currently at >1000 due to above operations.
	 * This can be done using: (cents + 5) / 10.
	 */
	cents = (cents + 5) / 10;

	return Money(dollars, cents);
}
Money operator*(const Money& l, const int& r) {
	return Money(l.dol * r, l.cent * r);
}
Money operator*(const int& l, const Money& r) {
	return Money(l * r.dol, l * r.cent);
}

/* Division operator overloading to divide 2 Moneys or 1 Money and an integer.
 * Integer is assumed to be a dollar value.
 */
Money operator/(const Money& l, const Money& r) {
	// Convert operands to cents, divide them by eachother
	// then convert back to dollars, cents, rounding in the process.
	long long lTotCents = 100 * l.dol + l.cent;
	long long rTotCents = 100 * r.dol + r.cent;

	/* Multiply left by 1000 so we can perform integer division
	 * without the result becoming zero. Dividing this away avoids
	 * floating point precision errors at the cost of risking
	 * overflows/underflows with large dollar amounts.
	 */
	lTotCents *= 1000;
	long long total = lTotCents / rTotCents;

	int dollars = total / 1000;
	int cents = total % 1000;

	/* Round cents to nearest 100, then divide by 100.
	 * Cent is currently at >1000 due to above operations.
	 * This can be done using: (cents + 5) / 10.
	 */
	cents = (cents + 5) / 10;

	return Money(dollars, cents);
}
Money operator/(const Money& l, const int& r) {
	// Convert operands to cents, divide them by eachother
	// then convert back to dollars, cents, rounding in the process.
	long long lTotCents = 100 * l.dol + l.cent;
	long long rTotCents = 100 * r;

	/* Multiply left by 1000 so we can perform integer division
	 * without the result becoming zero. Dividing this away avoids
	 * floating point precision errors at the cost of risking
	 * overflows/underflows with large dollar amounts.
	 */
	lTotCents *= 1000;
	long long total = lTotCents / rTotCents;

	int dollars = total / 1000;
	int cents = total % 1000;

	/* Round cents to nearest 100, then divide by 100.
	 * Cent is currently at >1000 due to above operations.
	 * This can be done using: (cents + 5) / 10.
	 */
	cents = (cents + 5) / 10;

	return Money(dollars, cents);
}
Money operator/(const int& l, const Money& r) {
	// Convert operands to cents, divide them by eachother
	// then convert back to dollars, cents, rounding in the process.
	long long lTotCents = 100 * l;
	long long rTotCents = 100 * r.dol + r.cent;

	/* Multiply left by 1000 so we can perform integer division
	 * without the result becoming zero. Dividing this away avoids
	 * floating point precision errors at the cost of risking
	 * overflows/underflows with large dollar amounts.
	 */
	lTotCents *= 1000;
	long long total = lTotCents / rTotCents;

	int dollars = total / 1000;
	int cents = total % 1000;

	/* Round cents to nearest 100, then divide by 100.
	 * Cent is currently at >1000 due to above operations.
	 * This can be done using: (cents + 5) / 10.
	 */
	cents = (cents + 5) / 10;

	return Money(dollars, cents);
}

/* Equality operator (==) overloading.
 * Compares either 2 Money variables or a Money variable and an integer.
 * Integer is assumed to be a dollar value and cents value is 0,
 * so any Money variable where cents value is not 0 will always fail.
 */
bool operator==(const Money& l, const Money& r) {
	return l.dol == r.dol && l.cent == r.cent;
}
bool operator==(const Money& l, const int& r) {
	return l.dol == r && l.cent == 0;
}
bool operator==(const int& l, const Money& r) {
	return l == r.dol && 0 == r.cent;
}

/* Less than operator (<) overloading.
 * Compares either 2 Money variables or a Money variable and an integer.
 * Integer is assumed to be a dollar value where the cent value is 0.
 */

/* If the left dollar value is less than the right, it is guaranteed to be true.
 * Otherwise, check the cent values to see if the left is less than the right
 * if the dollar values are equal
 */
bool operator<(const Money& l, const Money& r) {
	return l.dol < r.dol || (l.dol == r.dol && l.cent < r.cent);
}
// Money's dollar value must always be less than the integer to be true.
bool operator<(const Money& l, const int& r) {
	return (l.dol < r);
}
// Integer must always be less than the Money's dollar value to be true.
bool operator<(const int& l, const Money& r) {
	return (l < r.dol);
}

/* Greater than operator (>) overloading.
 * Compares either 2 Money variables or a Money variable and an integer.
 * Integer is assumed to be a dollar value with a cents value of 0.
 * 
 * Utilizes the previously implemented == and < overloaded operators to
 * return appropriate true or false values.
 */
bool operator>(const Money& l, const Money& r) {
	return !(l == r || l < r);
}
bool operator>(const Money& l, const int& r) {
	return !(l == r || l < r);
}
bool operator>(const int& l, const Money& r) {
	return !(l == r || l < r);
}

/* Greater than operator (<=) overloading.
 * Compares either 2 Money variables or a Money variable and an integer.
 * Integer is assumed to be a dollar value with a cents value of 0.
 *
 * Utilizes the previously implemented == and < overloaded operators to
 * return appropriate true or false values.
 */
bool operator<=(const Money& l, const Money& r) {
	return l < r || l == r;
}
bool operator<=(const Money& l, const int& r) {
	return l < r || l == r;
}
bool operator<=(const int& l, const Money& r) {
	return l < r || l == r;
}

/* Greater than operator (>=) overloading.
 * Compares either 2 Money variables or a Money variable and an integer.
 * Integer is assumed to be a dollar value with a cents value of 0.
 *
 * Utilizes the previously implemented == and > overloaded operators to
 * return appropriate true or false values.
 */
bool operator>=(const Money& l, const Money& r) {
	return l > r || l == r;
}
bool operator>=(const Money& l, const int& r) {
	return l > r || l == r;
}
bool operator>=(const int& l, const Money& r) {
	return l > r || l == r;
}

/* Comparison operator != overloading.
 * Compares either 2 Money variables or a Money variable and an integer.
 * Integer is assumed to be a dollar value where cent value is 0.
 * 
 * Utilizes the previously implemented == overloaded operator to
 * return appropriate true or false values.
 */
bool operator!=(const Money& l, const Money& r) {
	return !(l == r);
}
bool operator!=(const Money& l, const int& r) {
	return !(l == r);
}
bool operator!=(const int& l, const Money& r) {
	return !(l == r);
}

/* Increment and Decrement operators (++ and --) overloading
 * Increase or decrease the dollar amount by 1
 * Prefix and postfix
 */

// Prefix - increment by dollars
Money operator++(Money& m) {
	m.dol += 1;
	return m;
}
// Postfix - increment by dollars
Money operator++(Money& m, int) {
	Money temp = m;
	m.dol += 1;
	return temp;
}
// Prefix - decrement by dollars
Money operator--(Money& m) {
	m.dol -= 1;
	return m;
}
// Postfix - decrement by dollars
Money operator--(Money& m, int) {
	Money temp = m;
	m.dol -= 1;
	return temp;
}