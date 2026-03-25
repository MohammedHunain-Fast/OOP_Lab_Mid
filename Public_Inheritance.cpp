#include <iostream>
using namespace std;

class Base {
        int a = 10;
    public:
        int b = 20;
    protected:
        int c = 30;
};

class Derived : public Base {
    public:
        void displayc() {
            cout << c << endl;
        }
};

int main() {
    Derived d;
    cout << d.b << endl;
    d.displayc();
}
