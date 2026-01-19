#include "Fraction.h"

Fraction::Fraction() :num(0), den(1) {
	cout << "No Data Constructor" << endl;
}
Fraction::Fraction(int n) :num(n), den(1) {
	cout << "Data 1 Constructor" << endl;
}
Fraction::Fraction(int n, int d) :num(n), den(d) {
	if (den == 0)
		den = 1;
}
void Fraction::Print()const {

	cout << num << '/' << den;

}
int Fraction::GetNum()const {
	return num;
}
int Fraction::GetDen()const {
	return den;
}

Fraction Fraction::operator+(const Fraction& right)const {
	Fraction retval;
	retval.num = num * right.den + right.num * den;
	retval.den = den * right.den;

	return retval;
}

Fraction operator*(const Fraction& left, const Fraction& right) {
	Fraction retval;
	retval.num = left.num * right.num;
	retval.den = left.den * right.den;
	return retval;
}

ostream& operator<<(ostream& os, const Fraction& right) {
	os << right.num << "/" << right.den;
	return os;
}
istream& operator>>(istream& is, Fraction& right) {
	char dummy;
	is >> right.num >> dummy >> right.den;
	if (right.den == 0)
		right.den = 1;
	return is;
}
bool operator==(const Fraction& left, const Fraction& right) {
	return left.num * right.den == right.num * left.den;
}
bool Fraction::operator>(const Fraction& right)const {
	return num * right.den > right.num * den;
}
bool operator!=(const Fraction& left, const Fraction& right) {
	return !(left == right);
}
bool Fraction::operator<(const Fraction& right)const {
	return !(*this == right || *this > right);
}
//Prefix
Fraction Fraction::operator++() {
	num += den;
	return *this;
}
//Postfix
Fraction Fraction::operator++(int) {
	Fraction temp = *this;
	num += den; // num = num + den;
	return temp;
}
//Prefix
Fraction operator--(Fraction& f) {	
	f.num -= f.den;
	return f;
}
//Postfix
Fraction operator--(Fraction& f, int) {
	Fraction temp = f;
	f.num -= f.den;
	return temp;
}