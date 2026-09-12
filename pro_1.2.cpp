#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "enter a word: ";
    cin >> s;

    cout << "length = " << s.length() << endl;
    cout << "upper: ";
    for (char c : s) {
        cout << (char)toupper(c); // range-based for
    }
    cout << endl;

    // Palindrome check using two indexes
    bool pal = true;
    for (size_t i = 0, j = s.size() - 1; i < j; ++i, --j) {
        if (s[i] != s[j]) {
            pal = false;
            break;
        }
    }
    cout << s << (pal ? " is " : " is NOT ") << "a palindrome \n";

    // Find a substring
    size_t pos = s.find("an");
    if (pos != string::npos) 
        cout << "found at index " << pos << endl;
    else 
        cout << "'an' not found \n";

    return 0;
}