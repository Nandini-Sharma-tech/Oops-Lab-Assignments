#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    virtual void displayInfo() {
        cout << "Generic vehicle" << endl;
    }
    virtual ~Vehicle() {}
};

class Car : public Vehicle {
    string brand;
    int seats;
public:
    Car(string b, int s) : brand(b), seats(s) {}
    void displayInfo() override {
        cout << "Car  -> Brand: " << brand << ", Seats: " << seats
             << ", Wheels: 4" << endl;
    }
};

class Bike : public Vehicle {
    string brand;
    int engineCC;
public:
    Bike(string b, int cc) : brand(b), engineCC(cc) {}
    void displayInfo() override {
        cout << "Bike -> Brand: " << brand << ", Engine: " << engineCC
             << " cc, Wheels: 2" << endl;
    }
};

class Bus : public Vehicle {
    string route;
    int capacity;
public:
    Bus(string r, int c) : route(r), capacity(c) {}
    void displayInfo() override {
        cout << "Bus  -> Route: " << route << ", Capacity: " << capacity
             << " passengers, Wheels: 6" << endl;
    }
};

int main() {
    Vehicle *ptr;
    Car  car("Maruti Swift", 5);
    Bike bike("Hero Splendor", 125);
    Bus  bus("Patiala - Chandigarh", 50);

    ptr = &car;
    ptr->displayInfo();

    ptr = &bike;
    ptr->displayInfo();

    ptr = &bus;
    ptr->displayInfo();

    return 0;
}