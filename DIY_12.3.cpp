
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector<int> v = {10, 15, 20, 25, 30};

int sum = accumulate(v.begin(), v.end(), 0,
        [](int total, int x) {
            if (x % 2 == 0)
                return total + x;
            else
                return total;
        });

cout << "Sum of even numbers: " << sum << endl;

    return 0;
}
