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
    int start = 0, end = s.length() - 1;
    while (start < end)
    {
        if (s[start] != s[end])
            return "No";
        start++;
        end--;
    }
    return "Yes";
}
int main()
{
    string s;
    cin >> s;
    cout << bestApproach(s);
    return 0;
}