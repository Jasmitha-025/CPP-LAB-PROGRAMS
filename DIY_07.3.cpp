
#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
public:
    Person(string n) {
        name = n;
        cout << "Person constructor called" << endl;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
    }
};

class Student : virtual public Person {
protected:
    int rollNo;
public:
    Student(string n, int r) : Person(n) {
        rollNo = r;
        cout << "Student constructor called" << endl;
    }
};

class Employee : virtual public Person {
protected:
    int empId;
public:
    Employee(string n, int e) : Person(n) {
        empId = e;
        cout << "Employee constructor called" << endl;
    }
};

class TA : public Student, public Employee {
    string subject;

public:
    TA(string n, int r, int e, string s)
        : Person(n), Student(n, r), Employee(n, e) {
        subject = s;
        cout << "TA constructor called" << endl;
    }
 void display() {
        cout << "\nTeaching Assistant Details" << endl;
        displayPerson();
        cout << "Roll Number: " << rollNo << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    TA t("Asha", 25, 501, "C++");
    t.display();
    return 0;
}
