#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "For loop with initialization, condition and increment:" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
    }

    cout << endl << endl;

    // For loop without initialization
    cout << "For loop without initialization:" << endl;

    i = 0;
    for (; i < 10; i++)
    {
        cout << i << " ";
    }

    cout << endl << endl;

    // For loop without increment
    cout << "For loop without increment:" << endl;

    i = 0;
    for (; i < 10;)
    {
        cout << i << " ";
        i++;
    }

    cout << endl << endl;


    cout << "While loop:" << endl;

    i = 0;
    while (i < 10)
    {
        cout << i << " ";
        i++;
    }

    cout << endl << endl;

    // While loop with condition initially false
    cout << "While loop with initially false condition:" << endl;

    i = 10;
    while (i < 10)
    {
        cout << i << " ";
        i++;
    }

    cout << "Loop did not execute." << endl << endl;

    //DO-WHILE LOOP

    cout << "Do-while loop:" << endl;

    i = 0;
    do
    {
        cout << i << " ";
        i++;
    } while (i < 10);

    cout << endl << endl;

    // Do-while executes at least once
    cout << "Do-while with initially false condition:" << endl;

    i = 10;
    do
    {
        cout << i << " ";
        i++;
    } while (i < 10);

    cout << endl;

    return 0;
}