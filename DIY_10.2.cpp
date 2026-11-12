
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("in.txt");
    ofstream fout("out.txt");

    if (!fin || !fout) {
        cout << "File opening failed";
        return 0;
    }

    string line;
    int n = 1;

    while (getline(fin, line)) {
        fout << n << ". " << line << endl;
        n++;
    }

    fin.close();
    fout.close();

    cout << "File copied successfully";

    return 0;
}
