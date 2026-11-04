#include <iostream>
using namespace std;

namespace First
{
    int x = 10;

    void display()
    {
        cout << "First namespace" << endl;
        cout << "x = " << x << endl;
    }
}

namespace Second
{
    int x = 20;

    void display()
    {
        cout << "Second namespace" << endl;
        cout << "x = " << x << endl;
    }
}

int main()
{
    First::display();
    Second::display();

    cout << "First x = " << First::x << endl;
    cout << "Second x = " << Second::x << endl;

    return 0;
}