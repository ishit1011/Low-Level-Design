#include<bits/stdc++.h>
using namespace std;

// With virtual (Late Binding / Run-Time)
// “I want this function to use runtime polymorphism — call the derived class version of the function, 
// even if I'm using a base class pointer or reference.”

class Base {
    public:
        virtual void show() {
            cout << "Base class" << endl;
        }
    };
    
    class Derived : public Base {
    public:
        void show() override {
            cout << "Derived class" << endl;
        }
    };
    
    int main() {
        // Using a base class (data type) pointer to call the derived class function
        Base* obj = new Derived();
        obj->show();  // Output: Derived class ✅ (polymorphic!)

        Base obj2;
        obj2.show();  // Output: Base class ❌ (not polymorphic)
    }
    