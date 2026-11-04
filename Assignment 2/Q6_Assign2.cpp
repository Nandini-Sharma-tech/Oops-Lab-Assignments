#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:

    // Default constructor
    Complex()
    {
        real = 0;
        imaginary = 0;
    }

    // Parameterized constructor
    Complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }

    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main()
{
    Complex c1;
    Complex c2(5, 7);

    cout << "Default Constructor: ";
    c1.display();

    cout << "Parameterized Constructor: ";
    c2.display();

    return 0;
}