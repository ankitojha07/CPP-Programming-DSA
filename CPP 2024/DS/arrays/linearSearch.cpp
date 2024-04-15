#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {78, 6, 96, 25, 3};
    int n = sizeof(arr) / sizeof(int);
    int num = 3;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            res = i;
        }
        else
        {
            res = 0;
        }
    }
    if (res + 1 == 0)
    {
        cout << "Element is not present in the array!" << endl;
    }
    else
    {
        cout << "Element found at " << res + 1 << " position" << endl;
    }

    return 0;
}