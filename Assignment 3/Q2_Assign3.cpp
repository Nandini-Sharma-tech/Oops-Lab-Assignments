#include <iostream>
using namespace std;

class Number
{
private:
    int a, b;

public:
    Number(int x, int y)
    {
        a = x;
        b = y;
    }

    friend void calculateSum(Number n);
};

void calculateSum(Number n)
{
    cout << "Sum = " << n.a + n.b << endl;
}

int main()
{
    Number n(10, 20);

    calculateSum(n);

    return 0;
}