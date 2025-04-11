#include"A_basicClass.h"
#include<bits/stdc++.h>
using namespace std;



enum UberStausOptions{
    LookingForCab,
    CabArrived,
    OnTheWay,
    Delivered
};

string getCurrentStatus(UberStausOptions status) {
    switch (status) {
        case LookingForCab:
            return "Looking for a cab";
        case CabArrived:
            return "Cab has arrived";
        case OnTheWay:
            return "On the way to destination";
        case Delivered:
            return "Package delivered";
        default:
            return "Unknown status";
    }
}



int main(){
    // Object : each object gets its own copy of data members and all objects share a single copy of member functions
    Delivery uber(1,"Jalandhar");
    srand(time(0)); 
    string currentStatus;
    int randomStatus = rand() % 4; 
    // UberStausOptions randomStatus = static_cast<UberStausOptions>(rand() % 4); : Static casting
    currentStatus = getCurrentStatus((UberStausOptions)randomStatus);
    // currentStatus = getCurrentStatus(randomStatus);
    uber.status = currentStatus;
    cout<<"The uber status is :"<<uber.status<<endl;

    cout<<"\n";
    // 1. Dynamic memory allocation using "new" operator
    // *ptr : Pointer to object of class Delivery
    Delivery *ptr = new Delivery(2,"Ludhiana"); 
    /*  2. Pointer Stored in Stack
     Delivery obj(2,"Ludhiana"); // Static memory allocation
     Delivery *ptr = &obj;
     */
    delete(ptr); // Memory Leak in Heap if not deleted

    cout<<"\n";
    Delivery amazon(3,"Delhi");
    string curr = getCurrentStatus(UberStausOptions::OnTheWay);
    amazon.track(curr);
    cout<<"\nTotal Deliveries: "<<Delivery::totalDeliveries<<endl;

    if(Delivery ::isServicible("Noida")){
        cout<<"\nYes, we deliver to Noida."<<endl;
    }
    else{
        cout<<"\nSorry, we do not deliver to Noida."<<endl;
    }


    /*  "this" pointer
        "this" is a special pointer available inside all non-static member functions of a class. 
        - implicit pointer
        - holds the memory address of the current object that is calling the function.
        - used to identify the object that is invoking the member function.
    */
    return 0;
}