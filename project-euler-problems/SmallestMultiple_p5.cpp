#include <iostream>
using namespace std;

int primeFactors(int n)
{
    if (n == 0)
    {
        return 1;
    }
    n *= (primeFactors(n - 1));
    return n;
}

int main()
{
    int result = primeFactors(5);
    cout << result << endl;
    return 0;
}