#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int id;
    float salary;

public:
    Employee(string n, int i, float s)
    {
        name = n;
        id = i;
        salary = s;
    }

    void display()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e("Nandini Sharma", 101, 50000);

    e.display();

    return 0;
}