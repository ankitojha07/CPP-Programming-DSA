#include <iostream>
using namespace std;

// example of direct recursion

void multTwo(int n, int i)
{
    if (i > 10)
    {
        return;
    }
    cout << i * n << endl;
    multTwo(n, i + 1);
}

int main()
{
    int a = 9;
    multTwo(a, 1);
    return 0;
}