#include <iostream>
#include <vector>
using namespace std;

/* 📌 Base Class */
class DeliveryBase {
protected:
    int packageID;
    string destination;
public:
    DeliveryBase(int id, string dest) : packageID(id), destination(dest) {}
    
    void trackPackage() {
        cout << "Tracking package ID " << packageID << " to " << destination << endl;
    }
};

/* 📌 Single Inheritance: ParcelDelivery inherits from DeliveryBase */
class ParcelDelivery : public DeliveryBase {
public:
    ParcelDelivery(int id, string dest) : DeliveryBase(id, dest) {}
    
    void deliverParcel() {
        cout << "Parcel " << packageID << " delivered to " << destination << endl;
    }
};

/* 📌 Multilevel Inheritance: InternationalDelivery -> ParcelDelivery -> DeliveryBase */
class InternationalDelivery : public ParcelDelivery {
private:
    string country;
public:
    InternationalDelivery(int id, string dest, string cntry) : ParcelDelivery(id, dest), country(cntry) {}

    void showDetails() {
        cout << "International Delivery to " << country << " for package ID: " << packageID << endl;
    }
};

/* 📌 Multiple Inheritance: ExpressDelivery inherits from both DeliveryBase & CustomerSupport */
class CustomerSupport {
public:
    void assistCustomer() {
        cout << "Assisting customer for delivery issues..." << endl;
    }
};

class ExpressDelivery : public DeliveryBase, public CustomerSupport {
public:
    ExpressDelivery(int id, string dest) : DeliveryBase(id, dest) {}

    void fastTrackDelivery() {
        cout << "Express delivery for package ID " << packageID << " to " << destination << endl;
    }
};

/* 📌 Hierarchical Inheritance: FoodDelivery and ParcelDelivery both inherit DeliveryBase */
class FoodDelivery : public DeliveryBase {
public:
    FoodDelivery(int id, string dest) : DeliveryBase(id, dest) {}

    void deliverFood() {
        cout << "Food delivered to " << destination << endl;
    }
};

/* 📌 Hybrid Inheritance: Combination of multiple types */
class HybridExample : public ExpressDelivery {
public:
    HybridExample(int id, string dest) : ExpressDelivery(id, dest) {}

    void hybridFeature() {
        cout << "This class combines multiple inheritance concepts!" << endl;
    }
};

int main() {
    cout << "----- Single Inheritance Example -----" << endl;
    ParcelDelivery parcel(101, "New York");
    parcel.trackPackage();
    parcel.deliverParcel();

    cout << "\n----- Multilevel Inheritance Example -----" << endl;
    InternationalDelivery intl(202, "Los Angeles", "USA");
    intl.trackPackage();
    intl.showDetails();

    cout << "\n----- Multiple Inheritance Example -----" << endl;
    ExpressDelivery express(303, "San Francisco");
    express.fastTrackDelivery();
    express.assistCustomer();

    cout << "\n----- Hierarchical Inheritance Example -----" << endl;
    FoodDelivery food(404, "Chicago");
    food.trackPackage();
    food.deliverFood();

    cout << "\n----- Hybrid Inheritance Example -----" << endl;
    HybridExample hybrid(505, "London");
    hybrid.fastTrackDelivery();
    hybrid.assistCustomer();
    hybrid.hybridFeature();

    return 0;
}
