#include <iostream>
using namespace std;

class SafeArray
{
    int *a, n;

public:
    SafeArray(int size)
    {
        n = size;
        a = new int[n]();
    }

    int& operator[](int i)
    {
        if (i < 0 || i >= n)
        {
            throw 1;
        }
        return a[i];
    }

    ~SafeArray()
    {
        delete[] a;
    }
};

int main()
{
    SafeArray a(3);

    a[0] = 10;
    a[1] = 20;
    a[2] = 30;

    try
    {
        cout << a[1] << endl;
        cout << a[5] << endl;
    }
    catch (int)
    {
        cout << "Index out of range!" << endl;
    }

   return 0;
}