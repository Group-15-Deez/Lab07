#ifndef DIV_SALES_
#define DIV_SALES
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class DivSales {
    private:
        double divSales;
        static double totalSales;     
    public:
        vector<double> sales;  
        DivSales();
        void setSales(double one, double two, double three, double four);
        double getDivSales();
        static double getCorpSales(); 
        
};
#endif