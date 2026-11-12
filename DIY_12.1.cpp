
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<pair<string, int>> v = {
        {"Apple", 30},
        {"Mango", 10},
        {"Orange", 20},
        {"Banana", 15}
    };

    sort(v.begin(), v.end(), [](pair<string, int> a, pair<string, int> b) {
        return a.second < b.second;
    });

    cout << "Sorted pairs:" << endl;

    for (int i = 0; i < v.size(); i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}
