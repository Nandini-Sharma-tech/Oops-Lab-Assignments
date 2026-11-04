#include <iostream>
#include <stdexcept>
using namespace std;

const int SIZE = 5;

int getElement(int arr[], int index) {
    if (index < 0 || index >= SIZE)
        throw out_of_range("Index is outside the valid range");
    return arr[index];
}

int main() {
    int arr[SIZE] = {10, 20, 30, 40, 50};
    int index;

    cout << "Array has " << SIZE << " elements (valid index 0 to " << SIZE - 1 << ")" << endl;
    cout << "Enter index: ";
    cin >> index;

    try {
        int value = getElement(arr, index);
        cout << "arr[" << index << "] = " << value << endl;
    }
    catch (const out_of_range &e) {
        cout << "Error: " << e.what() << " (entered " << index << ")" << endl;
    }

    return 0;
}