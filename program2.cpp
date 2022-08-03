#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "X value before swap:";
    cin >> x;
    cout << "Y value before swap:";
    cin >> y;
    swap(x, y);
    cout << "X value is:" << x << endl;
    cout << "y Value is:" << y << endl;
}
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}