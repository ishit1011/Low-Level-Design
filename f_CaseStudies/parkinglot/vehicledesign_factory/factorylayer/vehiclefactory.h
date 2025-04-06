#ifndef VEHICLEFACTORY_H
#define VEHICLEFACTORY_H
#include "vehicleinterface.h"
#include "car.h"
#include "bike.h"
#include "truck.h"

#include<bits/stdc++.h>
using namespace std;

class vehicleFactory {
    public :
    //  "static" : belongs to whole class rather than object of class
    // - static function(no object) : VehicleInterface* v = VehicleFactory:: createVehicle(101,"Car")
    // - non-static fn(object required) : VehicleFactory vf; VehicleInterface* v = vf.createVehicle(101,"Car")
    
    // static VehicleInterface createVehicle() ❌ : creating objects of abstract class not allowed
    static VehicleInterface* createVehicle(int vehicleId, string vehicleType){
        transform(vehicleType.begin(), vehicleType.end(), vehicleType.begin(), ::tolower);
        if(vehicleType == "car"){
            return new Car(vehicleId);
        }
        else if(vehicleType == "bike"){
            return new Bike(vehicleId);
        }
        else if(vehicleType == "truck"){
            return new Truck(vehicleId);
        }
        else{
            cout<<vehicleType<<" are not allowed ❌"<<endl;
            return nullptr;
        }
    }
};

#endif