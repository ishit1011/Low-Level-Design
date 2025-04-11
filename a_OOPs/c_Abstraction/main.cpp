#include<bits/stdc++.h>
#include "upiPayment.h"
#include "creditcardPayment.h"


using namespace std;

int main(){
    CreditCardPayment m1;
    m1.setPaymentMethod();

    UPIPayment *ptr = new UPIPayment; // Dynamic memory allocation : ptr is a pointer to UPIPayment object
    // UPIPayment ptr; // Static memory allocation : ptr is an object of UPIPayment class
    // UPIPayment *ptr = &m1; // Static memory allocation : ptr is a pointer to CreditCardPayment object
    ptr->setPaymentMethod();

}