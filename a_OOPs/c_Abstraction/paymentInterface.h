#ifndef PAYMENT_INTERFACE_H
#define PAYMENT_INTERFACE_H
#include <bits/stdc++.h>

using namespace std;

// This is an abstract class that defines a payment interface for different payment methods.
class PaymentInterface {
    private: 
    int paymentId;
    string paymentMethod;

    public:
    PaymentInterface(int id, string method){
        paymentId = id;
        paymentMethod = method;
        cout<<"Payment Interface is same .."<<endl;
    }
    virtual void setPaymentMethod() = 0;
};


#endif