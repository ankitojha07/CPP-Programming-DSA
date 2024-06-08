#include <iostream>
using namespace std;

void showNum(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    showNum(n - 1);
}

int main()
{
    showNum(10);
    return 0;
}