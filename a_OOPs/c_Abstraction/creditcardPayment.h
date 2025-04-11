#ifndef CREDIT_CARD_PAYMENT_H
#define CREDIT_CARD_PAYMENT_H
#include<bits/stdc++.h>
#include "paymentinterface.h"

using namespace std;

class CreditCardPayment : public PaymentInterface{
    public:
    // Calling the constructor of the base class PaymentInterface (as it is not default contructor)
    // Constructor of derived class CreditCardPayment
    CreditCardPayment() : PaymentInterface(1,"Credit Card"){};
    void setPaymentMethod() override{
        cout<<"This is Credit Card Payment 💳"<<endl;
    }
};

#endif