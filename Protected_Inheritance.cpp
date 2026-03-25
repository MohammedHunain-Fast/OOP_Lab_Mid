#include <iostream>
using namespace std;

class LibraryResource {
    public:
        int id;
        void setID(int id) {
            this -> id = id;
        }
};

class Book : protected LibraryResource {
    public:
        void registerbook(int x) {
            setID(x);
        }
        void display() {
            cout << id << endl;
        }
};

int main() {
    Book b;
    b.registerbook(100);
    b.display();
    return 0;
}
