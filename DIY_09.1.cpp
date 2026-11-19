
#include <iostream>
#include <exception>
using namespace std;

class InsufficientFunds : public exception {
public:
    const char* what() const noexcept {
        return "Insufficient balance!";
    }
};

class BankAccount {
    double balance;

public:
    BankAccount(double b) {
        balance = b;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount > balance) {
       throw InsufficientFunds();
        }

        balance -= amount;
        cout << "Withdrawal successful" << endl;
        cout << "Remaining balance: " << balance << endl;
    }
};

int main() {
    BankAccount b(5000);

    try {
        b.withdraw(2000);
        b.withdraw(4000);
    }
    catch (InsufficientFunds &e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
