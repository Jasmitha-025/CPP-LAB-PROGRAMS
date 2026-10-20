#include <iostream>
using namespace std;

inline int MinVal(int a, int b) {
    return (a < b) ? a : b;
}
inline int MinVal(int a, int b, int c) {
    return MinVal(MinVal(a, b), c);
}

int main() {
    cout << "Smaller of 10 & 20 = " << MinVal(10, 20) << endl;
    cout << "Smaller of 15, 8, 12 = " << MinVal(15, 8, 12) << endl;

    return 0;
}