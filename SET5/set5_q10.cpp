#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n = "", int a = 0) : name(n), age(a) {}

    virtual void display() const {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

class Teacher : public Person {
private:
    string subject;
    double salary;

public:
    Teacher(string n = "", int a = 0, string s = "", double sal = 0.0)
        : Person(n, a), subject(s), salary(sal) {}

    void display() const override {
        Person::display();
        cout << "Role: Teacher\nSubject: " << subject << "\nSalary: " << salary << endl;
    }
};

class ResearchScholar : public Person {
private:
    string specialization;
    string thesisTitle;

public:
    ResearchScholar(string n = "", int a = 0, string spec = "", string thesis = "")
        : Person(n, a), specialization(spec), thesisTitle(thesis) {}

    void display() const override {
        Person::display();
        cout << "Role: Research Scholar\nSpecialization: " << specialization
             << "\nThesis Title: " << thesisTitle << endl;
    }
};

template <typename T>
class RecordManager {
private:
    vector<T> records;

public:
    void addRecord(const T& record) {
        records.push_back(record);
    }

    void displayRecords() const {
        for (const auto& record : records) {
            record.display();
            cout << "----------------------" << endl;
        }
    }
};

int main() {
    RecordManager<Teacher> teacherRecords;
    RecordManager<ResearchScholar> scholarRecords;

    Teacher t1("Dr. Anil Sharma", 42, "Computer Science", 85000.0);
    Teacher t2("Mrs. Priya Verma", 36, "Mathematics", 72000.0);

    ResearchScholar s1("Rahul Singh", 25, "Artificial Intelligence", "Vision-Based Robotics");
    ResearchScholar s2("Neha Gupta", 27, "Data Science", "Big Data Analytics");

    teacherRecords.addRecord(t1);
    teacherRecords.addRecord(t2);
    scholarRecords.addRecord(s1);
    scholarRecords.addRecord(s2);

    cout << "Teacher Records:\n";
    teacherRecords.displayRecords();

    cout << "\nResearch Scholar Records:\n";
    scholarRecords.displayRecords();

    return 0;
}
