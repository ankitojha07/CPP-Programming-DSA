#include <iostream>
using namespace std;

void largestPrimeFactors(long long int n)
{
    long long int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            n /= i;
        }
        else
        {
            i += 1;
        }
    }
    cout << n << endl;
}

int main()
{
    long long int target = 600851475143;
    largestPrimeFactors(target);
    return 0;
}