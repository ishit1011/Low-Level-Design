#ifndef TICKET_H
#define TICKET_H
#include "../vehicledesign_factory/vehicleinterface.h"

#include<bits/stdc++.h>
using namespace std;

class Ticket{
    time_t startTime;
    // ParkingSpot spot;
    VehicleInterface* vehicle;
};

#endif