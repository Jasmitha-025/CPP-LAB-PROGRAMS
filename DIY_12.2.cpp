#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter the numbers:" << endl;

for (int i = 0; i < n; i++) {
        cin >> x;
        pq.push(x);
    }

    cout << "Three largest numbers:" << endl;

for (int i = 0; i < 3 && !pq.empty(); i++) {
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}
