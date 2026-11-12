
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int marks;
};

int main() {
    Student s[3];

    ofstream fout("students.txt");

    fout << "Asha 85" << endl;
    fout << "Ravi 95" << endl;
    fout << "Meera 90" << endl;

    fout.close();

ifstream fin("students.txt");

    if (!fin) {
        cout << "File opening failed";
        return 0;
    }

for (int i = 0; i < 3; i++) {
        fin >> s[i].name >> s[i].marks;
    }

    fin.close();

int top = 0;

    for (int i = 1; i < 3; i++) {
        if (s[i].marks > s[top].marks) {
            top = i;
        }
    }

    cout << "Student Details" << endl;

 for (int i = 0; i < 3; i++) {
        cout << s[i].name << " " << s[i].marks << endl;
    }
    cout << "\nTopper: " << s[top].name << endl;
    cout << "Marks: " << s[top].marks << endl;
    return 0;
}
