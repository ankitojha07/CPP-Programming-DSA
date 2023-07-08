#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int a = 30, b = 40;
    int *p = &a;
    int *q = &b;
    p = q;
    
    cout << p << " " << q;
    return 0;
}