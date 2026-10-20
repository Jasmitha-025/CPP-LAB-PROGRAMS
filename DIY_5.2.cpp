
#include <iostream>
using namespace std;

class Time
{
    int hh, mm;

public:
    Time(int h, int m)
    {
        hh = h;
        mm = m;
    }

    friend Time laterOf(Time, Time);

    void display()
    {
        cout << hh << ":" << mm << endl;
    }
};

Time laterOf(Time t1, Time t2)
{
    if (t1.hh > t2.hh ||
       (t1.hh == t2.hh && t1.mm > t2.mm))
        return t1;
    else
        return t2;
}

int main()
{
    Time t1(11, 30), t2(12, 15);

    cout << "Later time: ";
    laterOf(t1, t2).display();

    return 0;
}
