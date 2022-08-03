#include <iostream>
using namespace std;
int main()
{
    int m = 3, n;
    cin >> n;
    cout << m << "\t";
    for (int i = 1; i < n; i++)
    {
        m = m * 3;
        cout << m << "\t";
    }
}