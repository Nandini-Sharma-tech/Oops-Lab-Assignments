#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:

    void set(int r, int i)
    {
        real = r;
        imaginary = i;
    }

    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }

    Complex sum(Complex c)
    {
        Complex temp;

        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;

        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;

    c1.set(3, 4);
    c2.set(5, 6);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    c3 = c1.sum(c2);

    cout << "Sum: ";
    c3.display();

    return 0;
}