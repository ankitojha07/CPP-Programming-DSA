#include <iostream>
using namespace std;

bool isPrime(long int n)
{
    long int count = 0;
    for (long int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

long int findNthPrime(long int target)
{
    long int count = 0, i = 1, result = 0;
    while (count <= target)
    {
        if (isPrime(i))
        {
            count++;
            if (count == target)
            {
                return i;
            }
        }
        i++;
    }
    return -1;
}

int main()
{
    long int target = 10001;
    long int result = findNthPrime(target);
    cout << result << endl;
    return 0;
}