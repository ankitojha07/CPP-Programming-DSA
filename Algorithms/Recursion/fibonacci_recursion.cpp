#include <iostream>
using namespace std;

void recursion(int n, int b, int a)
{
    // base case
    if (n == 1)
    {
        return;
    }
    int c = b + a;
    cout << c << endl;
    recursion(n - 1, c, b);
}

int main()
{
    cout << 0 << endl;
    int n = 10;
    recursion(n, 0, 1);
    return 0;
}

// 0,1,2,3,5,8,13

// print first 10 numbers of fibonacci series