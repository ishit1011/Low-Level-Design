#ifndef PARCELDELIVERY_H
#define PARCELDELIVERY_H

#include<bits/stdc++.h>
using namespace std;
#include "delivery.h"

class ParcelDelivery : public Delivery{
    public:
    void generalDelivery() override{ 
        cout<<"This is PARCEL delivery ..."<<endl;
    }
};

#endif