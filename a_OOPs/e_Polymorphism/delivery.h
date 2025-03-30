#ifndef DELIVERY_H
#define DELIVERY_H

#include<bits/stdc++.h>
using namespace std;

class Delivery{
    public:
    Delivery(){
        cout<<"Default constructor called."<<endl;
    }

    void track(){
        cout<<"Tracking the delivery."<<endl;
    }

    // Virtual function to be overridden in derived classes
    // virtual : It tells the compiler to support dynamic binding for this function.
    // It allows the function to be overridden in derived classes.
    // It is used to achieve runtime polymorphism.
    
    virtual void generalDelivery(){
        cout<<"This is general delivery"<<endl;
    }
    // virtual function : 1. define & declare 2. optional override 3. object creation of base class ✅
    // pure virtual function : 1. define only 2. must override 3. object creation of base class ❌
    virtual void deliverPackage() = 0; // Pure Virtual Function 

    // abstract class : A class that contains at least one pure virtual function



    ~Delivery(){
        cout<<"Destructor called...."<<endl;
    }
};

#endif