#include <iostream>
using namespace std;

class College
{
protected:
    string collegeName;

public:
    College()
    {
        collegeName = "Thapar University";

        cout << "College Constructor Called" << endl;
    }
};

class Department : public College
{
private:
    string departmentName;

public:
    Department()
    {
        departmentName = "Computer Applications";

        cout << "Department Constructor Called" << endl;
    }

    void display()
    {
        cout << "\nCollege Name: " << collegeName << endl;
        cout << "Department Name: " << departmentName << endl;
    }
};

int main()
{
    Department d;

    d.display();

    return 0;
}