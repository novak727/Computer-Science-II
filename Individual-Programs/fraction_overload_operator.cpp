//************************************
// Name: Devin Kennedy
// Date: 1/27/2025
// Course: CS255-01 - Computer Science II
// Description: Overloading operators for a class
// File name: fraction_overload_operator.cpp
//************************************
#include <iostream>
using namespace std;

class Fraction {
    private:
        int numerator;
        int denominator;

    public:
        Fraction (int num) {
            numerator = num;
            denominator = 1;
        }
    
        Fraction (int num, int denom) {
            numerator = num;
            denominator = denom;
        }

    double value() {
        return (double)numerator/denominator;
    }

    int getNumerator() {
        return numerator;
    }

    int getDenominator() {
        return denominator;
    }
    // Binary - class method
    Fraction operator+ (const Fraction& f) const {
        int n = numerator * f.denominator + denominator*f.numerator;
        int d = denominator*f.denominator;
        Fraction result(n, d);
        return result;
    }

    Fraction operator- (const Fraction& f) const {
        int n = numerator * f.denominator - denominator*f.numerator;
        int d = denominator*f.denominator;
        Fraction result(n, d);
        return result;
    }
    // Unary - class method
    Fraction operator- () {
        numerator = (-1)*numerator;
        Fraction result(numerator, denominator);
        return result;
    }
    // friend function
    friend Fraction operator/ (Fraction f1, Fraction f2) {
        int n = f1.numerator * f2.denominator;
        int d = f1.denominator * f2.numerator;
        Fraction result(n, d);
        return result;
    }

};
// nonmember function
Fraction operator* (Fraction f1, Fraction f2) {
    int n = f1.getNumerator()*f2.getNumerator();
    int d = f1.getDenominator()*f2.getDenominator();
    Fraction result(n, d);
    return result;
}

//************************************
// DRIVER
//************************************
int main() {
    Fraction f1(1), f2(1, 2);

    Fraction f3 = f1 + f2;
    cout << "f3: " << f3.value() << endl;
    
    Fraction f4 = -f3;
    cout << "f4: " << f4.value() << endl;

    Fraction f5 = f1*f2;
    cout << "f5: " << f5.value() << endl;

    Fraction f6 = f1/f2;
    cout << "f6: " << f6.value() << endl;

    Fraction f7 = f1 - f2;
    cout << "f7: " << f7.value() << endl;

    return 0;
}