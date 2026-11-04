#include <iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    void acceptName()
    {
        cout << "Enter Name: ";
        cin >> name;
    }
};

class Employee : public Person
{
protected:
    int employeeID;

public:
    void acceptEmployee()
    {
        acceptName();

        cout << "Enter Employee ID: ";
        cin >> employeeID;
    }
};

class Manager : public Employee
{
private:
    string department;

public:
    void acceptManager()
    {
        acceptEmployee();

        cout << "Enter Department: ";
        cin >> department;
    }

    void display()
    {
        cout << "\nManager Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Department: " << department << endl;
    }
};

int main()
{
    Manager m;

    m.acceptManager();
    m.display();

    return 0;
}