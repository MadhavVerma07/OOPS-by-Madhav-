#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int empId;
    string name;

public:
    Employee(int id , string n) : empId(id), name(n) {}

    void displayEmployee() const {
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
    }
};

class Manager : public Employee {
private:
    string department;
    double salary;

public:
    Manager(int id , string n , string dept , double sal)
        : Employee(id, n), department(dept), salary(sal) {}

    void displayManager() const {
        displayEmployee();
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Manager managers[5] = {
        Manager(101, "Madhav", "HR", 50000),
        Manager(102, "Aditya", "Finance", 60000),
        Manager(103, "abhay", "IT", 70000),
        Manager(104, "Dravin", "Sales", 65000),
        Manager(105, "vaibhav", "Operations", 72000)
    };

    cout << "Manager Details:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nManager " << i + 1 << ":\n";
        managers[i].displayManager();
    }

    return 0;
}
