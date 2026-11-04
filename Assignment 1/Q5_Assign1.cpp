#include <iostream>
using namespace std;

class Student
{
private:
    string name, degree, hostel;
    int rollNo;
    float cgpa;

    // Private member function
    void updateName()
    {
        cout << "Enter new name: ";
        cin >> name;
    }

public:
    void addDetails()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Degree: ";
        cin >> degree;

        cout << "Enter Hostel: ";
        cin >> hostel;

        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void updateDetails()
    {
        updateName();   // Calling private function
        cout << "Enter new Degree: ";
        cin >> degree;
    }

    void updateCGPA()
    {
        cout << "Enter New CGPA: ";
        cin >> cgpa;
    }

    void updateHostel()
    {
        cout << "Enter New Hostel: ";
        cin >> hostel;
    }

    void displaydetails()
    {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main()
{
    Student s;

    s.addDetails();
    s.displaydetails();

    s.updateDetails();
    s.updateCGPA();
    s.updateHostel();

    cout << "\nUpdated Details:\n";
    s.displaydetails();

    return 0;
}