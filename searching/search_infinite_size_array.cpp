#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int low, int high)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == n)
        {
            return mid;
        }
        if (arr[mid] < n)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return -1;
}

int infiniteSearch(int arr[], int n)
{
    if (arr[0] == n)
    {
        return 0;
    }
    int i = 1;
    while (arr[i] < n)
    {
        i = i * 2;
        if (arr[i] == n)
        {
            return i;
        }
    }
    return binarySearch(arr, n, i / 2, i - 1);
}

int main()
{
    int arr[] = {1, 10, 15, 20, 30, 40, 50, 80, 100, 120, 130, 150, 160, 180, 200, 220, 300, 400, 500, 550, 600, 800};

    int n = 80;
    int ans = infiniteSearch(arr, n);
    cout << "Index of " << n << " is : " << ans;
    return 0;
}
