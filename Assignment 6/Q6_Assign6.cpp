#include <iostream>
using namespace std;

class Student {
    float CGPA;

public:
    Student(float c) {
        CGPA = c;
    }

    bool operator==(Student s) {
        return CGPA == s.CGPA;
    }

    bool operator>(Student s) {
        return CGPA > s.CGPA;
    }
};

int main() {
    Student s1(8.5), s2(9.0);

    if (s1 == s2) {
        cout << "Both students have the same CGPA." << endl;
    } else {
        cout << "Both students have different CGPAs." << endl;
    }

    if (s1 > s2) {
        cout << "Student 1 has a higher CGPA." << endl;
    } else if (s2 > s1) {
        cout << "Student 2 has a higher CGPA." << endl;
    } else {
        cout << "Both students have equal CGPAs." << endl;
    }

    return 0;
}