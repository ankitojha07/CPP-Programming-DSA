#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {78, 6, 96, 25, 3};
    int n = sizeof(arr) / sizeof(int);
    int num = 3;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            cout << "Element found at " << i << " th index" << endl;
        }
        else
        {
            cout << "Element not present in the array" << endl;
        }
    }

    return 0;
}