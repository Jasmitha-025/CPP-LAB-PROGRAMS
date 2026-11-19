
#include <iostream>
using namespace std;

class Matrix
{
private:
    int m, n;
    int **data;

public:
    Matrix(int rows, int cols)
    {
        m = rows;
        n = cols;

        data = new int*[m];

        for (int i = 0; i < m; i++)
        {
            data[i] = new int[n];
        }
    }

    Matrix(const Matrix &other)
    {
        m = other.m;
        n = other.n;

        data = new int*[m];

        for (int i = 0; i < m; i++)
        {
            data[i] = new int[n];

            for (int j = 0; j < n; j++)
            {
                data[i][j] = other.data[i][j];
            }
        }
    }

    void input()
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> data[i][j];
            }
        }
    }

    void display()
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    ~Matrix()
    {
        for (int i = 0; i < m; i++)
        {
            delete[] data[i];
        }

        delete[] data;
    }
};

int main()
{
    int m, n;

    cout << "Enter rows and columns: ";
    cin >> m >> n;

    Matrix A(m, n);

    cout << "Enter matrix elements: ";
    A.input();

    Matrix B = A;

    cout << "Original matrix:" << endl;
    A.display();

    cout << "Copied matrix:" << endl;
    B.display();

    return 0;
}
