#ifndef UPI_PAYMENT_H
#define UPI_PAYMENT_H
#include<bits/stdc++.h>
#include "paymentinterface.h"

using namespace std;

class UPIPayment : public PaymentInterface{
    public:
    // Calling the constructor of the base class PaymentInterface (as it is not default contructor)
    UPIPayment() : PaymentInterface(2,"UPI"){}; 
    void setPaymentMethod() override{
        cout<<"This is UPI Payment 📲 "<<endl;
    }
};

#endif