#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] >= arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {5, 3, 7, 9, 2, 4, 66, 90, 45};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, n);

    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}