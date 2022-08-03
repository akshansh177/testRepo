#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    x = (2 * n) - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int l = 1; l < i; l++)
        {
            cout << " ";
        }
        for (int j = 1; j <= x; j++)
        {
            cout << "* ";
        }
        cout << "\n";
        x = x - 2;
    }
}