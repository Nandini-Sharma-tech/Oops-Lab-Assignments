#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes some sound" << endl;
    }
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog says: Woof! Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat says: Meow! Meow!" << endl;
    }
};

int main() {
    Animal *ptr;      // base-class pointer
    Dog d;
    Cat c;

    ptr = &d;         // points to Dog object
    ptr->sound();     // calls Dog::sound()

    ptr = &c;         // points to Cat object
    ptr->sound();     // calls Cat::sound()

    return 0;
}