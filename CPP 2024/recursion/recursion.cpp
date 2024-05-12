#include <iostream>
using namespace std;

void rec(int n)
{
    cout << "Befor call : " << n << endl;
    if (n > 0)
    {
        rec(n - 1);
    }
    cout << " After call : " << n << endl;
}

int main()
{
    int num = 8;
    rec(num);
    return 0;
}