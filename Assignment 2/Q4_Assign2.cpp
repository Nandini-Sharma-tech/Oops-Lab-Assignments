#include <iostream>
using namespace std;

class Box
{
private:
    int length, width, height;

public:

    // Default constructor
    Box()
    {
        length = 1;
        width = 1;
        height = 1;
    }

    // Parameterized constructor
    Box(int l, int w, int h)
    {
        length = l;
        width = w;
        height = h;
    }

    void volume()
    {
        cout << "Volume = " << length * width * height << endl;
    }
};

int main()
{
    Box b1;
    Box b2(10, 5, 2);

    cout << "Default Constructor:" << endl;
    b1.volume();

    cout << "Parameterized Constructor:" << endl;
    b2.volume();

    return 0;
}