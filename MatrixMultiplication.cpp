#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int r1, c1, r2, c2;
    cin >> r1 >> c1;
    cin >> r2 >> c2;
    int a[r1][c1];
    int b[r2][c2];
    int mul[10][10];
    cout << "Matrix 1:";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "Enter a" << i + 1 << j + 1 << "\n";
            cin >> a[i][j];
        }
    }
    cout << "Matrix 2:";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "Enter a" << i + 1 << j + 1 << "\n";
            cin >> b[i][j];
        }
    }
    cout << "Matrix mul:";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0;)
                cin >> b[i][j];
        }
    }
}