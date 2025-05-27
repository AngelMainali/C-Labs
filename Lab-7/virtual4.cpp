#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Generic animal sound." << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "Woof! Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound()  {
        cout << "Meow! Meow!" << endl;
    }
};

int main() {
    Animal* animal,b;

    Dog myDog;
    Cat myCat;

    animal =&b;
    animal->makeSound();
    
    animal = &myDog;
    animal->makeSound();

    animal = &myCat;
    animal->makeSound();


}
