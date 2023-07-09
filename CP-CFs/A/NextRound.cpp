#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, count = 0;
    cin>> n >> k;
    int v[n];
    for (int i = 1; i <=n; i++)
    {
        cin >> v[i];
    }
    for (int i =1; i <=n; i++)
    {
        if(v[i]<=0){
            continue;
        } 
        else if(v[i]>=v[k]) {
            count ++;
        }
        else{
            continue;
        }
    }
    cout << count << endl;
    
    
    return 0;
}