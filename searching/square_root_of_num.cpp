#include <bits/stdc++.h>
using namespace std;

int sqrRoot(int n)
{
    int l = 1, r = n, ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        int sqr = mid * mid;
        if (sqr == n)
            return mid;
        else if (sqr > n)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int ans = sqrRoot(n);
    cout << ans << endl;
    return 0;
}
