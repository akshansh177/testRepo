#include <iostream>
using namespace std;
void factorial(int, int);
int main()
{
    int x, fact = 1;
    cout << "factorial number: ";
    cin >> x;
    factorial(x, fact);
}
void factorial(int x, int fact)
{
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    cout << fact << endl;
}