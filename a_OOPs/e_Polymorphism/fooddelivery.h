#ifndef FOODDELIVERY_H
#define FOODDELIVERY_H
#include<bits/stdc++.h>

using namespace std;
#include "delivery.h"   

class FoodDelivery : public Delivery{
    public:
    void generalDelivery() override{ 
        cout<<"This is FOOD delivery ..."<<endl;
    }
};

#endif