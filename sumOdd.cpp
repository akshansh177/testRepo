#include <iostream>
using namespace std;
void oddSum(int);
int main()
{
    int x;
    cout << "Odd number: ";
    cin >> x;
    oddSum(x);
}
void oddSum(int x)
{
    int n = 1;
    for (int i = 1; i <= x; i++)
    {
        if (i % 2 != 0)
        {
            n = n + i;
            cout << n;
        }
    }
}