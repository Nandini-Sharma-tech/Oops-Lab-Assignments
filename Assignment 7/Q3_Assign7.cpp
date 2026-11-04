#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    double basicSalary;
public:
    Employee(string n, double b) : name(n), basicSalary(b) {}
    virtual double calculateSalary() {
        return basicSalary;
    }
    virtual ~Employee() {}
    string getName() const { return name; }
};

// Permanent: Basic + 20% HRA + 10% DA - 12% PF
class PermanentEmployee : public Employee {
public:
    PermanentEmployee(string n, double b) : Employee(n, b) {}
    double calculateSalary() override {
        double hra = 0.20 * basicSalary;
        double da  = 0.10 * basicSalary;
        double pf  = 0.12 * basicSalary;
        return basicSalary + hra + da - pf;
    }
};

// Contract: Basic salary + fixed contract allowance
class ContractEmployee : public Employee {
    double allowance;
public:
    ContractEmployee(string n, double b, double a) : Employee(n, b), allowance(a) {}
    double calculateSalary() override {
        return basicSalary + allowance;
    }
};

int main() {
    Employee *ptr;
    PermanentEmployee pe("Rahul Verma", 40000);
    ContractEmployee  ce("Priya Singh", 30000, 5000);

    ptr = &pe;
    cout << "Permanent Employee : " << ptr->getName()
         << "\nNet Salary         : " << ptr->calculateSalary() << endl << endl;

    ptr = &ce;
    cout << "Contract Employee  : " << ptr->getName()
         << "\nTotal Salary       : " << ptr->calculateSalary() << endl;

    return 0;
}