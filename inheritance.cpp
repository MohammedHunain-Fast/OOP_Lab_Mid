#include <iostream>
using namespace std;

class Animal {
    public:
        void eat() {
            cout << "This animal eats!\n";
        }
        void sleep() {
            cout << "This animal sleeps!\n";
        }
};

class Dog : public Animal {
    public:
        void bark() {
            cout << "This animal barks!\n";
        }
};

class Cat : public Animal {
    public: 
        void meow() {
            cout << "This animal meows!\n";
        }
};

int main() {
    Dog d;
    cout << "Dog Behaviour!\n";
    d.eat();
    d.sleep();
    d.bark();
    Cat c;
    cout << "Cat Behaviour!\n";
    c.eat();
    c.sleep();
    c.meow();
    return 0;
}
