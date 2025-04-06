#ifndef CAR_H
#define CAR_H
#include "vehicleinterface.h"

#include<bits/stdc++.h>
using namespace std;

class Car : public VehicleInterface{
    private :
    int hourlyRate;

    public:
    Car(int vehicleId) : VehicleInterface(vehicleId,"Car"){
        hourlyRate = 50;
        cout<<"New CAR 🚗 created in DB"<<endl;
    }

    // Funtion overriding (Run time polymorphism) : using pure virtual function
    int calculateFee(int hours) override {
        int amount = hourlyRate * hours;
        cout<<"This vehicle total fee for "<<hours<<" hours is ₹"<<amount<<endl;
        return amount;
    } 
};

#endif
