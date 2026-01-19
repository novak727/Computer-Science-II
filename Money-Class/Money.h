// ************************************
// Name: Devin Kennedy
// Co-authors: Ezzy Vielma, Ethan Mullins, Cameron Lindsey
// Date: 2/17/2025
// Course: CS255-01 - Computer Science II
// Description: Money class operator overloading declarations
// File name: Money.h
// ************************************
#ifndef _MONEY_H
#define _MONEY_H

#include <iostream>
#include <string>
using namespace std;

class Money {
private:
	int dol;
	int cent;
	void Normalize();
public:
	Money();
	Money(int d);
	Money(int d, int c);

	int GetDollar() const { return dol; }
	int GetCent() const { return cent; }

	friend ostream& operator<<(ostream& os, const Money& m);
	friend istream& operator>>(istream& is, Money& m);
	
	friend Money operator+(const Money& l, const Money& r);
	friend Money operator+(const Money& l, const int& r);
	friend Money operator+(const int& l, const Money& r);
	
	friend Money operator-(const Money& l, const Money& r);
	friend Money operator-(const Money& l, const int& r);
	friend Money operator-(const int& l, const Money& r);
	
	friend Money operator*(const Money& l, const Money& r);
	friend Money operator*(const Money& l, const int& r);
	friend Money operator*(const int& l, const Money& r);
	
	friend Money operator/(const Money& l, const Money& r);
	friend Money operator/(const Money& l, const int& r);
	friend Money operator/(const int& l, const Money& r);
	
	friend bool operator==(const Money& l, const Money& r);
	friend bool operator==(const Money& l, const int& r);
	friend bool operator==(const int& l, const Money& r);

	friend bool operator<(const Money& l, const Money& r);
	friend bool operator<(const Money& l, const int& r);
	friend bool operator<(const int& l, const Money& r);

	friend bool operator>(const Money& l, const Money& r);
	friend bool operator>(const Money& l, const int& r);
	friend bool operator>(const int& l, const Money& r);

	friend bool operator<=(const Money& l, const Money& r);
	friend bool operator<=(const Money& l, const int& r);
	friend bool operator<=(const int& l, const Money& r);

	friend bool operator>=(const Money& l, const Money& r);
	friend bool operator>=(const Money& l, const int& r);
	friend bool operator>=(const int& l, const Money& r);

	friend bool operator!=(const Money& l, const Money& r);
	friend bool operator!=(const Money& l, const int& r);
	friend bool operator!=(const int& l, const Money& r);
	
	friend Money operator++(Money& m);
	friend Money operator++(Money& m, int);
	friend Money operator--(Money& m);
	friend Money operator--(Money& m, int);
};

#endif