#include <iostream>
#include <stdexcept>
using namespace std;

void checkAge(int age) {
    if (age < 0)
        throw invalid_argument("Age cannot be negative");
}

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    try {
        checkAge(age);
        cout << "Valid age: " << age << " years" << endl;
    }
    catch (const invalid_argument &e) {
        cout << "Error: " << e.what() << " (you entered " << age << ")" << endl;
    }

    return 0;
}