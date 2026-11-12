
#include <iostream>
using namespace std;

template <class T>
void swapVals(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <class T>
T findMax(T arr[], int n) {
    T max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int a = 10, b = 20;

    cout << "Before swapping: " << a << " " << b << endl;
    swapVals(a, b);
    cout << "After swapping: " << a << " " << b << endl;

    int x[] = {10, 30, 20, 50, 40};
    cout << "Maximum integer: " << findMax(x, 5) << endl;

    double p = 2.5, q = 5.5;

    cout << "\nBefore swapping: " << p << " " << q << endl;
    swapVals(p, q);
    cout << "After swapping: " << p << " " << q << endl;

    double d[] = {2.5, 8.5, 4.5, 6.5};
    cout << "Maximum double: " << findMax(d, 4) << endl;

    return 0;
}
