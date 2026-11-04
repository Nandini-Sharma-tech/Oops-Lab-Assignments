#include <iostream>
using namespace std;

class Employee
{
private:
    float salary;

public:
    Employee(float s)
    {
        salary = s;
    }

    friend void compareSalary(Employee e1, Employee e2);
};

void compareSalary(Employee e1, Employee e2)
{
    if (e1.salary > e2.salary)
        cout << "Higher Salary = " << e1.salary << endl;
    else if (e2.salary > e1.salary)
        cout << "Higher Salary = " << e2.salary << endl;
    else
        cout << "Both salaries are equal" << endl;
}

int main()
{
    Employee e1(50000);
    Employee e2(65000);

    compareSalary(e1, e2);

    return 0;
}