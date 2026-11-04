#include <iostream>
using namespace std;

class Area
{
public:
    int calculate(int side)
    {
        return side * side;
    }

    int calculate(int length, int breadth)
    {
        return length * breadth;
    }

    double calculate(double radius)
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Area a;

    cout << "Area of Square: " << a.calculate(4) << endl;
    cout << "Area of Rectangle: " << a.calculate(5, 3) << endl;
    cout << "Area of Circle: " << a.calculate(2.0) << endl;

    return 0;
}