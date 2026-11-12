
#include <iostream>
#include <exception>
using namespace std;

class MathError : public exception {
public:
    const char* what() const noexcept {
        return "Math Error";
    }
};

class DivideByZero : public MathError {
public:
    const char* what() const noexcept {
        return "Division by zero";
    }
};

int main() {
    try {
        throw DivideByZero();
    }
    catch (DivideByZero &e) {
        cout << e.what() << endl;
    }
    catch (MathError &e) {
        cout << e.what() << endl;
    }

    return 0;
}
