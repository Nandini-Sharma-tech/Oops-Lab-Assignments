#include <iostream>
using namespace std;

// Custom exception carrying the details of the failed request
class InsufficientBooksException {
public:
    int requested;
    int available;
    InsufficientBooksException(int r, int a) : requested(r), available(a) {}
};

class LibraryAccount {
    int availableBooks;
public:
    LibraryAccount(int books) : availableBooks(books) {}

    void issueBook(int count) {
        if (count > availableBooks)
            throw InsufficientBooksException(count, availableBooks);
        availableBooks -= count;
        cout << count << " book(s) issued successfully." << endl;
    }

    int getAvailableBooks() const {
        return availableBooks;
    }
};

int main() {
    LibraryAccount account(10);
    int count;

    cout << "Available books: " << account.getAvailableBooks() << endl;
    cout << "Enter number of books to issue: ";
    cin >> count;

    try {
        account.issueBook(count);
    }
    catch (const InsufficientBooksException &e) {
        cout << "Error: Cannot issue " << e.requested << " book(s). Only "
             << e.available << " available." << endl;
    }

    cout << "Books remaining: " << account.getAvailableBooks() << endl;
    return 0;
}