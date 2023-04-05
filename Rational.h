/* Charles Young
    4/5/2023
    Lab7
*/

#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>
#include <numeric>

class Rational {
public:
    Rational(int n = 0, int d = 1) : numerator(n), denominator(d) {
        reduce();
    }

    friend std::ostream& operator<<(std::ostream& os, const Rational& r) {
        return os << r.numerator << '/' << r.denominator;
    }

    Rational operator+(const Rational& other) const;
    Rational operator-(const Rational& other) const;
    Rational operator*(const Rational& other) const;
    Rational operator/(const Rational& other) const;

private:
    int numerator;
    int denominator;

   void reduce() {
    int a = numerator;
    int b = denominator;
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    int gcd = a;
    numerator /= gcd;
    denominator /= gcd;
    if (denominator < 0) {
        numerator *= -1;
        denominator *= -1;
    }
  }

};
#endif
