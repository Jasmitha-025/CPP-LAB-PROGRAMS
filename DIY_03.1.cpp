
#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length, width;

public:
    void setLength(double l)
    {
        if (l >= 0)
            length = l;
        else
            cout << "Negative length rejected!" << endl;
    }

    void setWidth(double w)
    {
        if (w >= 0)
            width = w;
        else
            cout << "Negative width rejected!" << endl;
    }

    double area()
    {
        return length * width;
    }

    double perimeter()
    {
        return 2 * (length + width);
    }
};

int main()
{
    Rectangle r;
    double l, w;

    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;

    r.setLength(l);
    r.setWidth(w);

    if (l >= 0 && w >= 0)
    {
        cout << "Area: " << r.area() << endl;
        cout << "Perimeter: " << r.perimeter() << endl;
    }
    return 0;
}
