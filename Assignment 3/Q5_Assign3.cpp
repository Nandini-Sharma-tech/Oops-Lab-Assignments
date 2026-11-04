#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNo;
    float balance;

    static int totalAccounts;

public:

    // Constructor
    BankAccount(int acc, float bal)
    {
        accountNo = acc;
        balance = bal;
        totalAccounts++;
    }

    // Friend function
    friend void displayAccount(BankAccount b);

    // Static member function
    static void displayTotalAccounts()
    {
        cout << "Total Accounts = " << totalAccounts << endl;
    }
};

// Definition of static data member
int BankAccount::totalAccounts = 0;

// Friend function definition
void displayAccount(BankAccount b)
{
    cout << "Account No: " << b.accountNo << endl;
    cout << "Balance: " << b.balance << endl;
}

int main()
{
    BankAccount b1(1001, 50000);
    BankAccount b2(1002, 75000);
    BankAccount b3(1003, 100000);

    cout << "Account 1:" << endl;
    displayAccount(b1);

    cout << "\nAccount 2:" << endl;
    displayAccount(b2);

    cout << "\nAccount 3:" << endl;
    displayAccount(b3);

    cout << endl;

    BankAccount::displayTotalAccounts();

    return 0;
}