#ifndef _FRACTION_H
#define _FRACTION_H

#include <iostream>
using namespace std;

class Fraction {
private:
	int num;  //data members 
	int den;
public:
	Fraction();  //default constructor
	Fraction(int n);  //data constructor
	Fraction(int n, int d); //data constructor
	void Print()const;
	int GetNum()const;
	int GetDen()const;
	Fraction operator+(const Fraction& right)const;
	friend Fraction operator*(const Fraction& left, const Fraction& right);
	friend ostream& operator<<(ostream& os, const Fraction& right);
	friend istream& operator>>(istream& os, Fraction& right);
	friend bool operator==(const Fraction& left, const Fraction& right);
	bool operator>(const Fraction& right)const;
	friend bool operator!=(const Fraction& left, const Fraction& right);
	bool operator<(const Fraction& right)const;
	Fraction operator++(); //prefix
	Fraction operator++(int); //postfix
	friend Fraction operator--(Fraction& f); //prefix
	friend Fraction operator--(Fraction& f, int); //postfix
};

#endif