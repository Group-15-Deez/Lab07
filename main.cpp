/* Charles Young
    4/5/2023
    Lab7
*/

#include <iostream>
#include "Rational.h"

int main() {
    int n, d;
    std::cout << "Enter a numerator and denominator separated by a space: ";
    std::cin >> n >> d;

    Rational r(n, d);
    std::cout << "Reduced form: " << r << std::endl;

    return 0;
}
