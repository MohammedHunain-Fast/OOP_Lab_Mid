#include <iostream>
using namespace std;

class GrandParent {
    public:
        void house() {
            cout << "GrandParent owns a house.\n";
         }
};

class Parent : private GrandParent {
    public:
        void car() {
            cout << "The parent owns a car.\n";
        }

};

class Child : private Parent {
    public:
        void laptop() {
            // house(); inaccessable
            car();
            cout << "The child owns a laptop.\n";
        }
}; 

int main() {
    Child c;
    c.laptop();
    return 0;
}
