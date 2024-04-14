#include <bits/stdc++.h>
using namespace std;
// passing array to a function
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 8, 9, 3, 6, 4, 78};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    printArray(arr, n);
    return 0;
}
