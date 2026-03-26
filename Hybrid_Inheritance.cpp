#include <iostream>
using namespace std;

class Person {
    public:
        void getInfo() {
            cout << "I am a Person.\n";
        }
};

class Student : public Person {
    public:
        void study() {
            cout << "I am studying.\n";
        }
};

class Sports {
    public:
        void play() {
            cout << "I play football.\n";
        }
};

class StudentLeader : public Student, public Sports {
    public:
        void lead() {
            cout << "I am a student leader";
        }
};

int main() {
    StudentLeader s;
    s.getInfo();
    s.study();
    s.play();
    s.lead();

    return 0;
}
