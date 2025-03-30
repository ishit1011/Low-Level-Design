#include <bits/stdc++.h>
using namespace std;
#include "parceldelivery.h"
#include "fooddelivery.h"
#include "invoice.h"
#include "delivery.h"

int main(){
    /* Polymorphism : Single function/method/operator to have multiple forms. 
        - Instead of writing separate methods for similar tasks
        - Same function/operator can work in different ways without modifying the existing code.
    */

    /* 1. Compile time polymorphism (Method Overloading & Operator Overloading) */

    // - Method Overloading : Same method name with different parameters (different number of parameters or different types of parameters).
    Invoice incObj;
    incObj.generateInvoice(1); // Calls the first method
    incObj.generateInvoice(2, "John Doe"); // Calls the second method  
    incObj.generateInvoice(3, "Jane Doe", 99.99); // Calls the third method
    
    

    /* 2. Runtime polymorphism (Method Overriding using Virtual Functions & Pure Virtual Functions) */

    // -------- Base class pointer/reference, it enables dynamic binding (late binding) ------
    /*  
        - When you declare a virtual function in the base class, the compiler:
        - Creates a V-Table: A table storing pointers to virtual functions.
        - Adds a V-Ptr (Virtual Pointer) in the object: This pointer references the V-Table of the actual class 
    */
    Delivery *ptr = new Delivery();
    ptr->generalDelivery();
    
    ptr = new FoodDelivery();
    ptr->generalDelivery(); // Calls the overridden method in FoodDelivery class

    ptr = new ParcelDelivery();
    ptr->generalDelivery(); // Calls the overridden method in ParcelDelivery class
    


    /* ----- Function overriding with static binding (@ Compile Time) ------ */
    /*
    Delivery del;
    del.generalDelivery(); // Calls the base class method

    FoodDelivery foodDel;
    foodDel.generalDelivery(); // Calls the overridden method in FoodDelivery class

    ParcelDelivery parcelDel;
    parcelDel.generalDelivery(); // Calls the overridden method in ParcelDelivery class
    */
    

    return 0;
}