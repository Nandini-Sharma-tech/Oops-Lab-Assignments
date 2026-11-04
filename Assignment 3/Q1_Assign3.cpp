#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int marks;

public:
    Student(string n, int m)
    {
        name = n;
        marks = m;
    }

    friend void display(Student s);
};

// Friend function
void display(Student s)
{
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
}

int main()
{
    Student s("Nandini Sharma", 98);

    display(s);

    return 0;
}