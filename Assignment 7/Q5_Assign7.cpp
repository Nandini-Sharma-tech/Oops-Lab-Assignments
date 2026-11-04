#include <iostream>
using namespace std;

class BankAccount {
protected:
    double balance;
public:
    BankAccount(double b) : balance(b) {}
    virtual double calculateInterest() = 0;   // pure virtual -> abstract class
    virtual ~BankAccount() {}
};

// Savings: simple interest at 4% per annum
class SavingsAccount : public BankAccount {
    double rate;
    int years;
public:
    SavingsAccount(double b, int y) : BankAccount(b), rate(4.0), years(y) {}
    double calculateInterest() override {
        return (balance * rate * years) / 100;
    }
};

// Fixed Deposit: compound interest (yearly) at 7% per annum
class FixedDeposit : public BankAccount {
    double rate;
    int years;
public:
    FixedDeposit(double b, int y) : BankAccount(b), rate(7.0), years(y) {}
    double calculateInterest() override {
        double amount = balance;
        for (int i = 0; i < years; i++)
            amount += amount * rate / 100;
        return amount - balance;
    }
};

int main() {
    // BankAccount b;  // Error: cannot create object of abstract class
    BankAccount *ptr;

    SavingsAccount sa(50000, 3);
    FixedDeposit   fd(50000, 3);

    ptr = &sa;
    cout << "Savings Account (4% simple interest, 3 years)" << endl;
    cout << "Interest earned: " << ptr->calculateInterest() << endl << endl;

    ptr = &fd;
    cout << "Fixed Deposit (7% compound interest, 3 years)" << endl;
    cout << "Interest earned: " << ptr->calculateInterest() << endl;

    return 0;
}