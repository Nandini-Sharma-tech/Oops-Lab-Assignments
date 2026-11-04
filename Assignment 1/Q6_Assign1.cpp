#include <iostream>
using namespace std;

class Demo
{
private:
    void privateFunction()
    {
        cout << "Private function called";
    }

public:
    void publicFunction()
    {
        privateFunction();
    }
};

int main()
{
    Demo d;

    d.publicFunction();

    return 0;
}