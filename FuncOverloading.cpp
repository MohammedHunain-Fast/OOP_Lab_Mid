#include <iostream>
using namespace std;

class Person {
    public:
        void details(string name) {
            cout << "My name is " << name << endl;
        } 
        void details(int age) {
            cout << "My age is " << age << endl;
        }
};

int main() {
    Person p;
    p.details("Hunain");
    p.details(20);

    return 0;
}
