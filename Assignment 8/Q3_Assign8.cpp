#include <iostream>
#include <string>
using namespace std;

// Two different exception classes
class NegativeNumberException {
public:
    string message() const {
        return "Number is negative";
    }
};

class TooLargeException {
public:
    string message() const {
        return "Number is greater than 100";
    }
};

void checkNumber(int n) {
    if (n < 0)
        throw NegativeNumberException();
    if (n > 100)
        throw TooLargeException();
}

int main() {
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    try {
        checkNumber(n);
        cout << n << " is within the valid range (0 to 100)" << endl;
    }
    catch (const NegativeNumberException &e) {
        cout << "Negative Exception: " << e.message() << endl;
    }
    catch (const TooLargeException &e) {
        cout << "Too Large Exception: " << e.message() << endl;
    }

    return 0;
}