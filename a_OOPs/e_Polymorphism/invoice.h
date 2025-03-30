#ifndef INVOICE_H
#define INVOICE_H
#include <bits/stdc++.h>
using namespace std;

class Invoice
{
public:
    void generateInvoice(int packageID)
    {
        cout << "Generating invoice for package ID: " << packageID << endl;
    }

    void generateInvoice(int packageID, string customerName)
    {
        cout << "Generating invoice for " << customerName << " (Package ID: " << packageID << ")" << endl;
    }

    void generateInvoice(int packageID, string customerName, double amount)
    {
        cout << "Generating invoice of $" << amount << " for " << customerName << " (Package ID: " << packageID << ")" << endl;
    }
};

#endif