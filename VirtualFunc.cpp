#include <iostream>
using namespace std;

class Base {
    public:
        virtual void show() {              //Virtual added here because when we use pointer to override it doesnt work, So we use virtual Function to make it work.
            cout << "My name is Base!\n";
        }
};

class Derived : public Base {
    public:
        void show() {
            cout << "My name is Derived\n";
        }
};

int main() {
    Base *ptr;
    Derived d;
    ptr = &d;
    ptr -> show();

    return 0;
}
