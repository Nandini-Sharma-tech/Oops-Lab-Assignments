#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v) {
        value = v;
    }

    Number operator+(Number n) {
        return Number(value + n.value);
    }

    Number operator-(Number n) {
        return Number(value - n.value);
    }

    void display() {
        cout << value << endl;
    }
};

int main() {
    Number n1(30), n2(10);

    Number sum = n1 + n2;
    Number difference = n1 - n2;

    cout << "Addition = ";
    sum.display();

    cout << "Subtraction = ";
    difference.display();

    return 0;
}