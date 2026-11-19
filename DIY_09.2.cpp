
#include <iostream>
using namespace std;

class Overflow {
};

class Underflow {
};

class Stack {
    int a[3];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top == 2) {
            throw Overflow();
        }

        a[++top] = x;
        cout << x << " pushed" << endl;
    }

    void pop() {
        if (top == -1) {
            throw Underflow();
        }

        cout << a[top--] << " popped" << endl;
    }
};

int main() {
    Stack s;

    try {
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
    }
    catch (Overflow) {
        cout << "Stack Overflow!" << endl;
    }

    try {
        s.pop();
        s.pop();
        s.pop();
        s.pop();
    }
    catch (Underflow) {
        cout << "Stack Underflow!" << endl;
    }

    return 0;
}
