#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <vector <int>> arr {
        {1,2,3},
        {4,5,6},
        {5,3,2},
        {12,56,89}
    };

    for (int i = 0; i < arr.size(); i++)
    {
        for(auto x : arr[i]){
            cout<<x << " ";
        }
        cout << endl;
    }
    
    return 0;
}