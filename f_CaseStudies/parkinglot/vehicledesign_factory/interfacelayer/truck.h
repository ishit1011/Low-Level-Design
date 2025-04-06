#ifndef TRUCK_H
#define TRUCK_H
#include "vehicleinterface.h"

#include<bits/stdc++.h>
using namespace std;

class Truck : public VehicleInterface{
    private :
    int hourlyRate;

    public:
    Truck(int vehicleId) : VehicleInterface(vehicleId,"Truck"){
        hourlyRate = 50;
        cout<<"New TRUCK 🚛 created in DB"<<endl;
    }

    // Funtion overriding (Run time polymorphism) : using pure virtual function
    int calculateFee(int hours) override {
        int amount = hourlyRate * hours;
        cout<<"This vehicle total fee for "<<hours<<" hours is ₹"<<amount<<endl;
        return amount;
    } 
};

#endif
