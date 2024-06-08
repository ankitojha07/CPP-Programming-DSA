#include <bits/stdc++.h>
using namespace std;

// bootforce approach
// int sumOfDigit(int n)
// {
//     int rem = 0, sum = 0;
//     while (n != 0)
//     {
//         rem = n % 10;
//         n /= 10;
//         sum += rem;
//     }
//     return sum;
// }

// using recursion
int sumOfDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return sumOfDigits(n / 10) + n % 10;
}

int main(int argc, char const *argv[])
{
    int num;
    cin >> num;
    int ans = sumOfDigits(num);
    cout << ans << endl;
    return 0;
}
