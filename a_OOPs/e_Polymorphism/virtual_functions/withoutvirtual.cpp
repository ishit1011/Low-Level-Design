#include<bits/stdc++.h>
using namespace std;

// Without virtual (Early Binding / Compile-Time)

class Base {
    public:
        void show() {
            cout << "Base class" << endl;
        }
    };
    
    class Derived : public Base {
    public:
        void show() {
            cout << "Derived class" << endl;
        }
    };
    
    int main() {
        Base* obj = new Derived();
        obj->show();  // Output: Base class ❌ (not polymorphic)
    }
    