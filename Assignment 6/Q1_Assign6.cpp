#include <iostream>
using namespace std;

class Counter {
    int count;

public:
    Counter(int c) {
        count = c;
    }

    void operator++() {
        ++count;
    }

    void display() {
        cout << "Count = " << count << endl;
    }
};

int main() {
    Counter c(5);

    cout << "Before increment: ";
    c.display();

    ++c;

    cout << "After increment: ";
    c.display();

    return 0;
}