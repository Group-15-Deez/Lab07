#include "DivSales.h"
double DivSales::totalSales {0};
DivSales::DivSales() {
    for (int i = 0; i < 4; i++) {
        sales.push_back(0);
    }
}
void DivSales::setSales(double one, double two, double three, double four) {
    sales.push_back(one);
    sales.push_back(two);
    sales.push_back(three);
    sales.push_back(four);
    divSales = one + two + three + four;
    totalSales += divSales; 
}
double DivSales::getDivSales() {
    return divSales;
}
double DivSales::getCorpSales() {
    return totalSales;
}