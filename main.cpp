#include <iostream>
#include <string>
#include <vector> 
#include <iomanip>
#include "DivSales.h"
using namespace std;
int main() {
    vector<DivSales> divs;
    DivSales temp; 
    double one, two, three, four;
    for (int i = 1; i < 5; i++) {
        cout << "Enter sales data for Division " << i << endl;
        cout << "Quarter 1: ";
        cin >> one;
        while (one < 0) {
            cout << "Please enter 0 or greater: ";
            cin >> one;
        }
        cout << "Quarter 2: ";
        cin >> two;
        while (two < 0) {
            cout << "Please enter 0 or greater: ";
            cin >> two;
        }
        cout << "Quarter 3: ";
        cin >> three;
        while (three < 0) {
            cout << "Please enter 0 or greater: ";
            cin >> three;
        }
        cout << "Quarter 4: ";
        cin >> four;
        while (four < 0) {
            cout << "Please enter 0 or greater: ";
            cin >> four;
        }
        temp.setSales(one, two, three, four);
        divs.push_back(temp);
    }
    for (int i = 0; i < 4; i++) {
        cout << "Total Sales for Division " << i + 1 << ": $" << fixed << setprecision(2) << divs[i].getDivSales() << endl;
    }
    cout << "Total Corporate Sales: $" << DivSales::getCorpSales();
}