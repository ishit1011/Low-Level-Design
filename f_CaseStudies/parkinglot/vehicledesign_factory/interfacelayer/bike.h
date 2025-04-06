#ifndef BIKE_H
#define BIKE_H
#include "vehicleinterface.h"

#include<bits/stdc++.h>
using namespace std;

class Bike : public VehicleInterface{
    private :
    int hourlyRate;

    public:
    Bike(int vehicleId) : VehicleInterface(vehicleId,"Bike"){
        hourlyRate = 30;
        cout<<"New BIKE 🚲 created in DB"<<endl;
    }

    // Funtion overriding (Run time polymorphism) : using pure virtual function
    int calculateFee(int hours) override {
        int amount = hourlyRate * hours;
        cout<<"This vehicle total fee for "<<hours<<" hours is ₹"<<amount<<endl;
        return amount;
    } 
};

#endif
