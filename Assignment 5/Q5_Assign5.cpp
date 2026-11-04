#include <iostream>
using namespace std;

class Maximum
{
public:
    int findMax(int a, int b)
    {
        if (a > b)
            return a;
        else
            return b;
    }

    int findMax(int a, int b, int c)
    {
        int max = a;

        if (b > max)
            max = b;

        if (c > max)
            max = c;

        return max;
    }

    double findMax(double a, double b)
    {
        if (a > b)
            return a;
        else
            return b;
    }
};

int main()
{
    Maximum m;

    cout << "Maximum of two integers: "
         << m.findMax(40, 50) << endl;

    cout << "Maximum of three integers: "
         << m.findMax(40, 50, 60) << endl;

    cout << "Maximum of two decimal numbers: "
         << m.findMax(5.5, 8.2) << endl;

    return 0;
}