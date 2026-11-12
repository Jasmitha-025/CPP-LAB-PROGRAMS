
#include <iostream>
#include <memory>
using namespace std;

class Student {
public:
    string name;
    Student(string n) {
        name = n;
    }
    void display() {
        cout << "Student Name: " << name << endl;
    }
};

int main() {
    unique_ptr<Student> s(new Student("Jasmitha"));
    s->display();
    return 0;
}
