#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;

public:
    // Default constructor
    Student()
    {
        name = "Nandini Sharma";
        rollNo = 76;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student s;

    s.display();

    return 0;
}