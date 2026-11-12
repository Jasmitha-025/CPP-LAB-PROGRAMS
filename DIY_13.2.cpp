
#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Shape {
public:
    virtual void display() {
        cout << "This is a shape" << endl;
    }

    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void display() {
        cout << "Shape: Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void display() {
        cout << "Shape: Rectangle" << endl;
    }
};

class Triangle : public Shape {
public:
    void display() {
        cout << "Shape: Triangle" << endl;
    }
};

int main() {
    vector<unique_ptr<Shape>> shapes;
    int n;
    string name;

    cout << "Enter number of shapes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter shape name (Circle/Rectangle/Triangle): ";
        cin >> name;

        if (name == "Circle") {
            shapes.push_back(unique_ptr<Shape>(new Circle()));
        }
        else if (name == "Rectangle") {
            shapes.push_back(unique_ptr<Shape>(new Rectangle()));
        }
        else if (name == "Triangle") {
            shapes.push_back(unique_ptr<Shape>(new Triangle()));
        }
        else {
            cout << "Invalid shape!" << endl;
        }
    }

    cout << "\nCreated Shapes:" << endl;

    for (int i = 0; i < shapes.size(); i++) {
        shapes[i]->display();
    }

    return 0;
}
