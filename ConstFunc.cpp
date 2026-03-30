#include <iostream>
using namespace std;

class Printer {
  private:
    string model;
    static string printmode;
  public:
    Printer(string model) : model(model) {}

    void displaydetails() const {               //Const Function: Its doesn't modify the object
        printmode = "Black_and_White";
        cout << "Model: " << model << "\n"  << "Print Mode: " << printmode << endl;
    }

}; 

string Printer :: printmode = "Color";

int main() {
    Printer p1("HP");
    Printer p2("Canon");
    p1.displaydetails();
    p2.displaydetails();
    return 0;
}
