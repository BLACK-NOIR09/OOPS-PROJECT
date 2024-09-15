#include <iostream>
using namespace std;

// Abstract base class (Abstraction)
class Account {
protected:
    double balance;

public:
    Account(double bal) : balance(bal) {}
    virtual void deposit(double amount) = 0; // Pure virtual function
    virtual void withdraw(double amount) = 0; // Pure virtual function
    virtual void display() const = 0; // Pure virtual function
};

// Derived class (Inheritance)
class SavingsAccount : public Account {
public:
    SavingsAccount(double bal) : Account(bal) {}

    void deposit(double amount) override {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount) override {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void display() const override {
        cout << "Savings Account Balance: " << balance << endl;
    }
};

// Derived class (Inheritance)
class CheckingAccount : public Account {
public:
    CheckingAccount(double bal) : Account(bal) {}

    void deposit(double amount) override {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount) override {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void display() const override {
        cout << "Checking Account Balance: " << balance << endl;
    }
};

int main() {
    Account* acc1 = new SavingsAccount(1000.0); // Polymorphism
    Account* acc2 = new CheckingAccount(500.0); // Polymorphism

    acc1->deposit(200);
    acc1->withdraw(150);
    acc1->display();

    acc2->deposit(300);
    acc2->withdraw(100);
    acc2->display();

    delete acc1;
    delete acc2;

    return 0;
}