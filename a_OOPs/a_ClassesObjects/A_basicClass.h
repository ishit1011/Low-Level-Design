#ifndef A_BASIC_CLASS_H
#define A_BASIC_CLASS_H
//  Why to use header guards?
//  Header guards are used to prevent multiple inclusions of the same header file in a C++ program.
//  This is important because if a header file is included multiple times, it can lead to redefinition errors
//  & increase compilation time.

#include <bits/stdc++.h>
using namespace std;

// This is a simple class definition in C++.
// 1. The class is named "Delivery" and it contains private and public members (Access Modifiers : Private, Public, Protected).
// Private members are accessible only within the class itself
// Public members can be accessed from outside the class.
// Protected members are accessible in the class and by derived classes.
class Delivery
{
private:
    int packageID;
    string destination;
    static vector<string> cities; // Static data member (vector of strings) to store cities

public:
    string status;
    // 4. Static data member : belongs to the class rather than an instance.
    static int totalDeliveries; // Declaration of static data member

    /* 2. Constructor: A special member function that is called when an object of the class is created. */
    // a) Default constructor (no parameters)
    // b) Copy constructor ( initializes an object using another object of the same class.) [Delivery obj2(Delivery &obj1)]
    // c) Parameterised (this one)
    Delivery(int id, string addr)
    {
        if (isServicible(addr)){
            packageID = id;
            destination = addr;
            totalDeliveries++;
            cout << "Constructor of the delivery... with ID: " << packageID << endl;
        }
        else{
            cout << "Sorry, we do not deliver to " << addr << endl;
        }
    }

    void deliver(){
        if(isServicible(destination)){
            cout << "Delivering the package..." << endl;
        }
    }

    void track(string status){
        if(isServicible(destination)){
            cout << "Your package is at " << status << endl;
        }
    }

    /* 3. Destructor : Invoked automatically whenever an object is going to be destroyed. */
    
    ~Delivery(){
        if(isServicible(destination)){
            cout << "\nDestructor of ID " << packageID << " has been delivered to " << destination << endl;
        }
    }

    // 5. Static member function : can only access static data members and cannot access non-static data members.
    static bool isServicible(string inputCity){
        if (find(cities.begin(), cities.end(), inputCity) != cities.end()){
            return true;
        }
        return false;
    }
};

int Delivery ::totalDeliveries = 0; // Static data member initialization
vector<string> Delivery::cities = {"Mumbai", "Kolkata", "Delhi", "Chandigarh"}; // Static data member initialization

#endif
