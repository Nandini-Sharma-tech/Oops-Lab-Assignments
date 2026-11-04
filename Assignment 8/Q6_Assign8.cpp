#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

class Student {
    int marks[5];
public:
    void acceptMarks() {
        for (int i = 0; i < 5; i++) {
            cout << "Enter marks for subject " << i + 1 << ": ";
            if (!(cin >> marks[i]))     // non-numeric input
                throw invalid_argument("Invalid input: marks must be a number");
            if (marks[i] < 0 || marks[i] > 100)
                throw out_of_range("Subject " + to_string(i + 1) +
                                   ": marks must be between 0 and 100");
        }
    }

    double average() const {
        int sum = 0;
        for (int i = 0; i < 5; i++)
            sum += marks[i];
        return sum / 5.0;
    }
};

int main() {
    Student s;

    try {
        s.acceptMarks();
        // Reached only when all five marks are valid
        cout << "Average marks = " << s.average() << endl;
    }
    catch (const invalid_argument &e) {
        cout << "Error: " << e.what() << endl;
    }
    catch (const out_of_range &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}