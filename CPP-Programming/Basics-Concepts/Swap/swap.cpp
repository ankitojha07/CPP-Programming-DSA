#include <iostream>
using namespace std;

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void byAddress(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void byReference(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a, b;
    a = 10;
    b = 20;

    swap(a, b);
    cout << a << " " << b << endl;

    byAddress(&a, &b);
    cout << a << " " << b << endl;

    byReference(a, b);
    cout << a << " " << b << endl;

    return 0;
}