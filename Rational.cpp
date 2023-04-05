/* Charles Young
    4/5/2023
    Lab7
*/


#include "Rational.h"

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int lcm(int a, int b) {
    int gcd_ab = gcd(a, b);
    return gcd_ab ? (a / gcd_ab * b) : 0;
}

Rational Rational::operator+(const Rational& other) const {
    int new_denominator = lcm(denominator, other.denominator);
    int new_numerator = numerator * (new_denominator / denominator)
                        + other.numerator * (new_denominator / other.denominator);
    return Rational(new_numerator, new_denominator);
}

Rational Rational::operator-(const Rational& other) const {
    int new_denominator = lcm(denominator, other.denominator);
    int new_numerator = numerator * (new_denominator / denominator)
                        - other.numerator * (new_denominator / other.denominator);
    return Rational(new_numerator, new_denominator);
}

Rational Rational::operator*(const Rational& other) const {
    return Rational(numerator * other.numerator, denominator * other.denominator);
}

Rational Rational::operator/(const Rational& other) const {
    return Rational(numerator * other.denominator, denominator * other.numerator);
}

