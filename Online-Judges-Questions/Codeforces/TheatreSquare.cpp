#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a;
    cin >> n >> m >> a;

    long long res = 0;
    res += (ceil(1.0*n/a)*ceil(1.0*m/a));
    cout << res << endl;
 return 0;
}