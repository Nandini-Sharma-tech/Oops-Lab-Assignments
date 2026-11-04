#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string brand;
    string model;

public:
    void acceptVehicle()
    {
        cout << "Enter Brand: ";
        cin >> brand;

        cout << "Enter Model: ";
        cin >> model;
    }
};

class Car : public Vehicle
{
private:
    int doors;

public:
    void acceptCar()
    {
        acceptVehicle();

        cout << "Enter Number of Doors: ";
        cin >> doors;
    }

    void displayCar()
    {
        cout << "\nCar Details" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Number of Doors: " << doors << endl;
    }
};

class Bike : public Vehicle
{
private:
    int engineCapacity;

public:
    void acceptBike()
    {
        acceptVehicle();

        cout << "Enter Engine Capacity: ";
        cin >> engineCapacity;
    }

    void displayBike()
    {
        cout << "\nBike Details" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
    }
};

int main()
{
    Car c;
    Bike b;

    cout << "Enter Car Details" << endl;
    c.acceptCar();

    cout << "\nEnter Bike Details" << endl;
    b.acceptBike();

    c.displayCar();
    b.displayBike();

    return 0;
}