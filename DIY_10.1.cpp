
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("nums.txt");

    if (!fin) {
        cout << "File not found";
        return 0;
    }

    int n, count = 0, sum = 0;
    int min, max;

    while (fin >> n) {
        if (count == 0) {
            min = max = n;
        }

        if (n < min)
            min = n;

        if (n > max)
            max = n;

        sum += n;
        count++;
    }

    fin.close();

    if (count == 0) {
        cout << "File is empty";
    }
    else {
        cout << "Count = " << count << endl;
        cout << "Sum = " << sum << endl;
        cout << "Minimum = " << min << endl;
        cout << "Maximum = " << max << endl;
    }

    return 0;
}
