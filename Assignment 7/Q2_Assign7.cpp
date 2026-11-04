#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area of a generic shape is not defined" << endl;
    }
    virtual ~Shape() {}
};

class Rectangle : public Shape {
    double length, breadth;
public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    void area() override {
        cout << "Area of Rectangle (" << length << " x " << breadth << ") = "
             << length * breadth << endl;
    }
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    void area() override {
        const double PI = 3.14159265;
        cout << "Area of Circle (radius " << radius << ") = "
             << PI * radius * radius << endl;
    }
};

int main() {
    Shape *ptr;
    Rectangle r(10, 5);
    Circle c(7);

    ptr = &r;
    ptr->area();      // Rectangle::area()

    ptr = &c;
    ptr->area();      // Circle::area()

    return 0;
}