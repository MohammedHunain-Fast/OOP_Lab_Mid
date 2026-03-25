#include <iostream>
using namespace std;

class Teacher {
    public:
        void show() {
            cout << "I am a teacher.\n";
        }
        void teach() {
            cout << "I am teaching students.\n";
        }
};

class Doctor {
    public:
        void show() {
            cout << "I am a doctor.\n";
        }
        void treat() {
            cout << "I am treating patients.\n";
        }
};

class Person : public Teacher, public Doctor {
    public:
        void introduce() {
            cout << "I am both teacher and a doctor.\n";
        }
};

int main() {
    Person p;
    p.teach();
    p.Teacher::show();
    p.treat();
    p.Doctor::show();
    p.introduce();
    return 0;
}

