#include <iostream>
using namespace std;

class Result
{
public:
    double result(double a)
    {
        return a;
    }

    double result(double a, double b)
    {
        return (a + b) / 2;
    }

    double result(double a, double b, double c)
    {
        return (a + b + c) / 3;
    }
};

int main()
{
    Result r;

    cout << "Average of one subject: "
         << r.result(25) << endl;

    cout << "Average of two subjects: "
         << r.result(25, 50) << endl;

    cout << "Average of three subjects: "
         << r.result(25, 50, 75) << endl;

    return 0;
}