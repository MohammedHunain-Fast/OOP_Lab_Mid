#include <iostream>
using namespace std;

class Animal {
    public:
     void eat() {
        cout << "This animal eats food.\n";
     }
};

class Dog : public Animal {
    public:
        void bark() {
            cout << "This animal barks.\n";
        }
};

class Cat : public Animal {
    public:
        void meow() {
            cout << "This animal meows.\n";
        }
};

int main() {
    Dog d;
    d.eat();
    d.bark();
    Cat c;
    c.eat();
    c.meow();
}
