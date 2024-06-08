
// functional recursion in cpp, a recursive function that returns something.

#include <iostream>
using namespace std;

int funcRec(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + funcRec(n - 1);
}

int main()
{
    int n = 5;
    int sum = funcRec(n);
    cout << sum << endl;
    return 0;
}