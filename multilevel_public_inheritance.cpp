#include <iostream>
using namespace std;

class GrandParent {
    public:
        void house() {
            cout << "GrandParent owns a house.\n";
         }
};

class Parent : public GrandParent {
    public:
        void car() {
            cout << "The parent owns a car.\n";
        }

};

class Child : public Parent {
    public:
        void laptop() {
            cout << "The child owns a laptop.\n";
        }
}; 

int main() {
    Child c;
    c.house();
    c.car();
    c.house();
    return 0;
}
