#include <iostream>
using namespace std;

class Demo
{
public:

    Demo()
    {
        cout << "Constructor called" << endl;
    }

    ~Demo()
    {
        cout << "Destructor called" << endl;
    }
};

void test()
{
    cout << "Inside test function" << endl;

    Demo d2;

    cout << "Leaving test function" << endl;
}

int main()
{
    cout << "Inside main" << endl;

    Demo d1;

    test();

    cout << "Back in main" << endl;

    return 0;
}