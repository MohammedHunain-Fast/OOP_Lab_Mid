#include <iostream>
using namespace std;

class Student {
    public:
        int normal_count = 0;
        static int static_count;

        Student() {
            normal_count++;
            static_count++;
        };

}; 
    int Student :: static_count = 0;

int main() {
    Student s1,s2,s3;
    cout << "S1's normal count: " << s1.normal_count << endl;
    cout << "S2's normal count: " << s2.normal_count << endl;
    cout << "S3's normal count: " << s3.normal_count << endl;
    cout << "Shared count: " << Student :: static_count << endl;

    return 0;
}
