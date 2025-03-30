#include<bits/stdc++.h>
using namespace std;
#include "financeClass.h" // finance class header file
#include "salesClass.h" // sales class header file

int main() {
    Finance finance(5000000); // Encapsulated financial data
    Sales sales(2000); // Encapsulated sales data

    cout << "Company Revenue: $" << finance.getRevenue() << endl;
    cout << "Total Sales: " << sales.getTotalSales() << " units" << endl;
    return 0;
}
