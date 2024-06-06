#include <iostream>
using namespace std;

void sumOfN(int n, int sum)
{
    if (n < 1)
    {
        cout << sum << endl;
        return;
    }
    sumOfN(n - 1, sum + n);
}

int main()
{
    int n = 5;
    sumOfN(n, 0);
    return 0;
}