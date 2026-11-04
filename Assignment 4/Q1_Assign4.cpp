#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void acceptPerson()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;
    }
};

class Student : public Person
{
private:
    int rollNo;
    string course;

public:
    void acceptStudent()
    {
        acceptPerson();

        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Course: ";
        cin >> course;
    }

    void display()
    {
        cout << "\nStudent Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Course: " << course << endl;
    }
};

int main()
{
    Student s;

    s.acceptStudent();
    s.display();

    return 0;
}