#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, breadth;

public:
    // Parameterized constructor
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    void area()
    {
        cout << "Area = " << length * breadth << endl;
    }
};

int main()
{
    Rectangle r(10, 5);

    r.area();

    return 0;
}