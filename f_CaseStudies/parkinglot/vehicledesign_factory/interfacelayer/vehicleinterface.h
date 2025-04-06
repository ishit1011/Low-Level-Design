#ifndef VEHICLEINTERFACE_H
#define VEHICLEINTERFACE_H
#include <bits/stdc++.h>
using namespace std;

class VehicleInterface {
    private : 
    int plateId;
    string vehicleType;

    public:
    VehicleInterface(int vId, string vType){
        plateId = vId;
        vehicleType = vType;
    }
    void getVehicleId(){
        cout<<"Vehicle Id is : "<<plateId<<endl;
    }
    void getVehicleType(){
        cout<<"Vehicle Type is : "<<vehicleType<<endl;
    }

    virtual int calculateFee(int hours) = 0; // pure virtual function

};

#endif // VEHICLEINTERFACE_H