#include <iostream>
using namespace std;

int main()
{
    float celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (9 * celsius / 5) + 32;

    cout << "Temperature in Fahrenheit = " << fahrenheit << endl;

    return 0;
}