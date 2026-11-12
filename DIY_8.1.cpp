
#include <iostream>
using namespace std;

class Account {
protected:
    double balance;

public:
    Account(double b) {
        balance = b;
    }

    virtual double calculateInterest() = 0;

    virtual void display() {
        cout << "Balance: " << balance << endl;
        cout << "Interest: " << calculateInterest() << endl;
    }

    virtual ~Account() {}
};

class Savings : public Account {
public:
    Savings(double b) : Account(b) {}

    double calculateInterest() override {
        return balance * 0.05;
    }
};

class Current : public Account {
public:
    Current(double b) : Account(b) {}

    double calculateInterest() override {
        return balance * 0.02;
    }
};

int main() {
    Account *accounts[2];

    accounts[0] = new Savings(10000);
    accounts[1] = new Current(20000);

    for (int i = 0; i < 2; i++) {
        cout << "\nAccount " << i + 1 << endl;
        accounts[i]->display();
    }

    for (int i = 0; i < 2; i++) {
        delete accounts[i];
    }

    return 0;
}
