#include <iostream>
using namespace std;
void harshed(int);
int main()
{
    int x;
    cout << "harshed number: ";
    cin >> x;
    harshed(x);
}
void harshed(int x)
{
    int a, n, sum = 0;
    n = x;
    while (n > 0)
    {
        a = n % 10;
        n = n / 10;
        sum = sum + a;
    }
    if (x % sum == 0)
    {
        cout << "its a harshad number";
    }
    else
    {
        cout << "its not a harshad number";
    }
}