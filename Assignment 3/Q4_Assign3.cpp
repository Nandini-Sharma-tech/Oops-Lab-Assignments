#include <iostream>
using namespace std;

class Student
{
private:
    static int count;

public:
    Student()
    {
        count++;
    }

    static void displayCount()
    {
        cout << "Total objects = " << count << endl;
    }
};

// Definition of static data member
int Student::count = 0;

int main()
{
    Student s1;
    Student s2;
    Student s3;

    Student::displayCount();

    return 0;
}