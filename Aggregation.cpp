#include <iostream>
using namespace std;

class Employee {
  private:
    string name;
    int id;
  public:
    Employee(string name, int id) : name(name), id(id) {}
     
    void display() const {
        cout << "Name: " << name << "\n" << "ID: " << id << endl;
    }
}; 
class Department {
    private:
    string dept_name;
    Employee *employees[10];
    int employee_count = 0;
    public:
    Department(string dept_name) : dept_name(dept_name)  {};

    void addEmployee(Employee *emp) {
      employees[employee_count++] = emp;
    } 
    void showdept() const {
        cout << "Department Name: " << dept_name << endl;
        for(int i = 0; i < employee_count; i++) {
        employees[i] -> display();
        }
    }
};

int main() {
    Employee e1("John", 1), e2("Sarah", 2);
    Department dept1("CS");
    dept1.addEmployee(&e1);
    dept1.addEmployee(&e2);
    dept1.showdept();
    return 0;
}
