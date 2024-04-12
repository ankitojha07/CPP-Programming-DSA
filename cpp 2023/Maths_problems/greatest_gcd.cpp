#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int m, n, ans;
    cin >> m >> n;

    // logic for greatest GCD
    for (int i = 1; i <= min(m, n); i++)
    {
        if (m % 1 == 0 && n % i == 0)
        {
            ans = i;
        }
    }
    cout << ans << " is the GCD of " << m << " & " << n << endl;
    return 0;
}
