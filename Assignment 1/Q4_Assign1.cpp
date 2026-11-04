#include <iostream>
using namespace std;

struct Student
{
    // Data Members
    string Name;
    int RollNo;
    string Degree;
    string Hostel;
    float CurrentCGPA;

    // Add Details
    void addDetails()
    {
        cout << "Enter Student Name: ";
        getline(cin >> ws, Name);

        cout << "Enter Roll No: ";
        cin >> RollNo;

        cout << "Enter Degree: ";
        cin >> Degree;

        cout << "Enter Hostel: ";
        cin >> Hostel;

        cout << "Enter Current CGPA: ";
        cin >> CurrentCGPA;
    }

    // Update Details
    void updateDetails()
    {
        cout << "\nEnter Updated Details:\n";

        cout << "Enter Student Name: ";
        getline(cin >> ws, Name);

        cout << "Enter Roll No: ";
        cin >> RollNo;

        cout << "Enter Degree: ";
        cin >> Degree;

        cout << "Enter Hostel: ";
        cin >> Hostel;

        cout << "Enter Current CGPA: ";
        cin >> CurrentCGPA;
    }

    // Update CGPA
    void updateCGPA()
    {
        cout << "\nEnter New CGPA: ";
        cin >> CurrentCGPA;
    }

    // Update Hostel
    void updateHostel()
    {
        cout << "Enter New Hostel: ";
        cin >> Hostel;
    }

    // Display Details
    void displaydetails()
    {
        cout << "\n----- Student Details -----\n";
        cout << "Name: " << Name << endl;
        cout << "Roll No: " << RollNo << endl;
        cout << "Degree: " << Degree << endl;
        cout << "Hostel: " << Hostel << endl;
        cout << "Current CGPA: " << CurrentCGPA << endl;
    }
};

int main()
{
    Student s1;

    s1.addDetails();

    s1.displaydetails();

    s1.updateCGPA();

    s1.updateHostel();

    s1.displaydetails();

    return 0;
}