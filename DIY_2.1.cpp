#include <iostream>
using namespace std;


double volume(double side) {
    return side * side * side;
}

double volume(double length, double breadth, double height) {
    return length * breadth * height;
}


double volume(double radius, double height) {
    return 3.14159 * radius * radius * height;
}

int main() {

    cout << "Volume of cube: " << volume(5.0) << endl;
    cout << "Volume of cuboid: " << volume(4.0, 5.0, 6.0) << endl;
    cout << "Volume of cylinder: " << volume(3.0, 7.0) << endl;

    return 0;
}