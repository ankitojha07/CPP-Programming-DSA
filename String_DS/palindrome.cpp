#include <bits/stdc++.h>
using namespace std;

string naiveApproach(string s)
{
    string rev = s;
    reverse(rev.begin(), rev.end());
    if (rev == s)
        return "yes";
    else
        return "No";
}

string bestApproach(string s)
{
}
int main()
{
    string s;
    cin >> s;
    cout << naiveApproach(s);
    return 0;
}