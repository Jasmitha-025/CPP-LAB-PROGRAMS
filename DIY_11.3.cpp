
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<string, int> freq;
    string word;

    cout << "Enter words (type end to stop):" << endl;

    while (cin >> word && word != "end") {
        freq[word]++;
    }

    cout << "\nWord frequencies:" << endl;

    string maxWord;
    int maxCount = 0;

    for (auto x : freq) {
        cout << x.first << " : " << x.second << endl;

        if (x.second > maxCount) {
            maxCount = x.second;
            maxWord = x.first;
        }
    }

    if (!freq.empty()) {
        cout << "\nMost frequent word: " << maxWord << endl;
        cout << "Count: " << maxCount << endl;
    }
    else {
        cout << "No words entered" << endl;
    }

    return 0;
}
