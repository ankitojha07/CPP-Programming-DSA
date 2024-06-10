#include <bits/stdc++.h>
using namespace std;

int palindrome(int result, int n)
{
    if (n == 0)
    {
        return result;
    }
    result = result * 10 + n % 10;
    return palindrome(result, n / 10);
}

int main()
{
    int num = 1551;
    int res = palindrome(0, num);
    if (num == res)
    {
        cout << num << " is palindrome number." << endl;
    }
    else
    {
        cout << num << " is not a palindrome.";
    }
    return 0;
}