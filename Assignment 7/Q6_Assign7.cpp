#include <iostream>
#include <cstring>
using namespace std;

class Person {
public:
    Person() {
        cout << "Person constructor called" << endl;
    }
    virtual ~Person() {
        cout << "Person destructor called" << endl;
    }
};

class Student : public Person {
    char *course;     // dynamic resource owned by Student
public:
    Student() {
        course = new char[20];
        strcpy(course, "MCA");
        cout << "Student constructor called (course allocated)" << endl;
    }
    ~Student() {
        delete[] course;
        cout << "Student destructor called (course freed)" << endl;
    }
};

int main() {
    Person *ptr = new Student();   // base pointer -> derived object
    cout << "--- deleting object through base-class pointer ---" << endl;
    delete ptr;
    return 0;
}