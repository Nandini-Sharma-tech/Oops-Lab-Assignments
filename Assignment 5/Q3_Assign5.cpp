#include <iostream>
using namespace std;

class Calculator
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }

    int sum(int a, int b, int c)
    {
        return a + b + c;
    }

    double sum(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Calculator c;

    cout << "Sum of two integers: "
         << c.sum(10, 20) << endl;

    cout << "Sum of three integers: "
         << c.sum(10, 20, 30) << endl;

    cout << "Sum of two decimal numbers: "
         << c.sum(2.5, 3.5) << endl;

    return 0;
}