#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    string RegNo;
    string CoName;

public:
    Vehicle(string r, string c) : RegNo(r), CoName(c) {}

    void display() {
        cout << "The vehicle's registration number is: " << RegNo << endl;
        cout << "The vehicle is of the company: " << CoName << endl;
    }
};

class Bike : public Vehicle {
    string Fuel_type;
    int EngineCapacity;

public:
    Bike(string s, string n, string f, int e) : Vehicle(s, n), Fuel_type(f), EngineCapacity(e) {}

    void display() {
        Vehicle::display();
        cout << "The Fuel type of the bike is: " << Fuel_type << endl;
        cout << "The engine capacity of the bike is: " << EngineCapacity << "cc" << endl;
    }
};

class Car : public Vehicle {
    string Fuel_type;
    int EngineCapacity;

public:
    Car(string s, string n, string f, int e) : Vehicle(s, n), Fuel_type(f), EngineCapacity(e) {}

    void display() {
        Vehicle::display();
        cout << "The Fuel type of the car is: " << Fuel_type << endl;
        cout << "The engine capacity of the car is: " << EngineCapacity << "cc" << endl;
    }
};

int main() {
    Bike b1("112233", "Honda", "petrol", 125);
    Car c1("112232", "ferrari", "gasoline", 800);

    b1.display();
    c1.display();

    return 0;
}