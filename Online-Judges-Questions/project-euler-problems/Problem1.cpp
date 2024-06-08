// Multiples of 3 or 5
#include <iostream>
using namespace std;

int main()
{
    int target = 1000;
    int result = 0;

    for (int i = 1; i < target; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            result += i;
        }
    }
    cout << result << endl;

    return 0;
}