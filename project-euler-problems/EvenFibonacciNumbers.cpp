#include <iostream>
using namespace std;

int main()
{
    long int a = 1, b = 2, c = 0, target = 4000000, result = 0;
    while (c < target)
    {
        c = b + a;
        a = b;
        b = c;

        if (a % 2 == 0)
        {
            result += a;
        }
    }
    cout << result << endl;

    return 0;
}