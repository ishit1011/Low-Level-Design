#ifndef FINANCE_CLASS_H
#define FINANCE_CLASS_H

#include <bits/stdc++.h>
using namespace std;

class Finance
{
private:
    double companyRevenue;

public:
    Finance(double revenue) { companyRevenue = revenue; }
    double getRevenue() { 
        return companyRevenue; 
    }
};

#endif // FINANCE_CLASS_H