#include<iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void makeSound() = 0;  // pure virtual
    virtual ~Animal() {}
};

// Derived class: Dog
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog says: Woof!" << endl;
    }
};

// Derived class: Cat
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat says: Meow!" << endl;
    }
};

// Derived class: Cow
class Cow : public Animal {
public:
    void makeSound() override {
        cout << "Cow says: Moo!" << endl;
    }
};

int main() {
    Animal* animals[] = {
        new Dog(),
        new Cat(),
        new Cow()
    };

    for (int i = 0; i < 3; i++) {
        animals[i]->makeSound();
        delete animals[i];
    }

    return 0;
}
