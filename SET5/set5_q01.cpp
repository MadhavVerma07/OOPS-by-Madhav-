#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int rollNumber;
    int age;

public:
    Student(string n, int r, int a) : name(n), rollNumber(r), age(a) {}

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Age: " << age << endl;
    }
};

class EngineeringStudent : public Student {
private:
    string branch;
    int semester;

public:
    EngineeringStudent(string n, int r, int a, string b, int s)
        : Student(n, r, a), branch(b), semester(s) {}

    void display() const {
        Student::display();
        cout << "Branch: " << branch << endl;
        cout << "Semester: " << semester << endl;
    }
};

int main() {
    EngineeringStudent e("Alice", 101, 20, "Computer Science", 5);
    e.display();
    return 0;
}
