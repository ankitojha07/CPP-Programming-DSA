#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;
    m["a"] = 6;
    m["b"] = 7;
    m["c"] = 9;

    m.insert({{"modi", 240},
              {"Rahul", 90},
              {"keju", 3},
              {"Ak", 37}});

    map<string, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    cout << "Size of map m is : " << m.size() << endl;
    cout << "Maximum size is : " << m.max_size() << endl;
    cout << "The empty's return value is : " << m.empty() << endl;
    return 0;
}