#include <iostream>
using namespace std;

class Base {
    public:
        void show() {
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
    Derived obj1, obj2;
    obj1.show();
    obj2.Base::show();
    return 0;
}
