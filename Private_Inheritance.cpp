#include <iostream>
using namespace std;

class Engine {
    public:
        void start() {
            cout << "The engine has started!\n";
        }
};

class Car : private Engine {
    public:
        void drive() {
            start();
            cout << "Car is moving!\n";
        }
};

int main() {
    Car c1;
    c1.drive();
    // c1.start() // will give error due to start() being private
    return 0;
}
