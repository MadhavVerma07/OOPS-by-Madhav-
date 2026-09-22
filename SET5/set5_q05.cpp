#include <iostream>
#include <string>
using namespace std;

class Account {
protected:
    int accountNumber;
    double balance;

public:
    Account(int accNo, double bal) : accountNumber(accNo), balance(bal) {}

    virtual void display(){
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance <<"Rs"<< endl;
    }

    virtual ~Account() = default;
};

class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(int accNo, double bal, double rate)
        : Account(accNo, bal), interestRate(rate) {}

    void display() override {
        cout << "Savings Account Details" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance <<"RS"<< endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

class CurrentAccount : public Account {
private:
    double overdraftLimit;

public:
    CurrentAccount(int accNo, double bal, double limit)
        : Account(accNo, bal), overdraftLimit(limit) {}

    void display() override {
        cout << "Current Account Details" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
        cout << "Overdraft Limit: $" << overdraftLimit << endl;
    }
};

int main() {
    SavingsAccount s1(1001, 2500.50, 4.5);
    SavingsAccount s2(1002, 4200.00, 5.0);
    CurrentAccount c1(2001, 1800.75, 500.00);
    CurrentAccount c2(2002, 3500.00, 1000.00);

    Account* accounts[] = {&s1, &s2, &c1, &c2};

    cout << "Account Information:\n" << endl;
    for (int i = 0; i < 4; i++) {
        accounts[i]->display();
        cout << "------------------------" << endl;
    }

    return 0;
}
