
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    string s1, s2;

    cout << "Enter first word: ";
    cin >> s1;

    cout << "Enter second word: ";
    cin >> s2;

    for (int i = 0; i < s1.length(); i++)
        s1[i] = tolower(s1[i]);

    for (int i = 0; i < s2.length(); i++)
        s2[i] = tolower(s2[i]);

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if (s1 == s2)
        cout << "The words are anagrams." << endl;
    else
        cout << "The words are not anagrams." << endl;

    return 0;
}
