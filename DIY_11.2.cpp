
#include <iostream>
#include <string>
using namespace std;

template <class T>
class Queue {
    T a[10];
    int front, rear;

public:
    Queue() {
        front = 0;
        rear = -1;
    }

    void enqueue(T x) {
        if (rear == 9) {
            cout << "Queue is full" << endl;
            return;
        }
        a[++rear] = x;
    }

    void dequeue() {
        if (front > rear) {
            cout << "Queue is empty" << endl;
            return;
        }
         cout << a[front] << " removed" << endl;
        front++;
    }

    void showFront() {
        if (front > rear) {
            cout << "Queue is empty" << endl;
        }
        else {
            cout << "Front element: " << a[front] << endl;
        }
    }
};

int main() {
    Queue<string> q;
    q.enqueue("Apple");
    q.enqueue("Mango");
    q.enqueue("Orange");
    q.showFront();
    q.dequeue();
    q.showFront();
    return 0;
}
