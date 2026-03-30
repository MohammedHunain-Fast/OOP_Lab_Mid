#include <iostream>
using namespace std;

class Item {
    private:
    static int value;
    public:
    static int display() {
        return value;
    }

}; 

int Item :: value = 0;

int main() {
    cout << "Value: " << Item :: display();

    return 0;
}
