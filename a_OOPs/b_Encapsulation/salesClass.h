#ifndef SALES_CLASS_H // if not defined : define header file only if not defined
#define SALES_CLASS_H // this line defines it

#include <bits/stdc++.h>
using namespace std;


class Sales {
private:
    int totalSales;

public:
    Sales(int sales) { totalSales = sales; }
    int getTotalSales() { return totalSales; }
};


#endif // SALES_CLASS_H