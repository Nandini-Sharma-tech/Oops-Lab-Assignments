#include <iostream>
#include <stdexcept>
using namespace std;

double divide(double a, double b) {
    if (b == 0)
        throw runtime_error("Division by zero is not allowed");
    return a / b;
}

int main() {
    double num, den;

    cout << "Enter numerator   : ";
    cin >> num;
    cout << "Enter denominator : ";
    cin >> den;

    try {
        double result = divide(num, den);
        cout << "Result = " << result << endl;
    }
    catch (const runtime_error &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}