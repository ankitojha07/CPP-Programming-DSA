#include<bits/stdc++.h>
using namespace std;
int main()
{
    int key ;
    cin>>key; 
    
    vector<int> v = {1,22,33,44,76,4,234,45};

    vector<int>::iterator it = find(v.begin(), v.end(), key);

    if(it!=v.end()){
        cout<<"Present at index "<< it - v.begin();
    } else cout<< "Element not found!";
    return 0;
}