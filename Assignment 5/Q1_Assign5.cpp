#include <iostream>
#include <string>
using namespace std;

class Print
{
public:
    void display(int a)
    {
        cout << "Integer: " << a << endl;
    }

    void display(double b)
    {
        cout << "Double: " << b << endl;
    }

    void display(string c)
    {
        cout << "String: " << c << endl;
    }
};

int main()
{
    Print p;

    p.display(10);
    p.display(12.5);
    p.display("Hello");

    return 0;
}