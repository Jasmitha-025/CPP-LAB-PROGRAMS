#include <iostream>
using namespace std;

class Money
{
    int r, p;

public:
    Money(int a = 0, int b = 0)
    {
        r = a + b / 100;
        p = b % 100;
    }

    Money operator+(Money m)
    {
        return Money(r + m.r, p + m.p);
    }

    Money operator-(Money m)
    {
        int x = r * 100 + p;
        int y = m.r * 100 + m.p;
        int d = x - y;

        return Money(d / 100, d % 100);
    }

    void display()
    {
        cout << r << " rupees " << p << " paise" << endl;
    }
};

int main()
{
    Money m1(10, 80), m2(5, 50);

    Money a = m1 + m2;
    Money b = m1 - m2;

    cout << "Sum: ";
    a.display();

    cout << "Difference: ";
    b.display();

    return 0;
}