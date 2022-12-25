#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int x)
{
    int low = 0;
    int high = x - 1;

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

int main(int argc, char const *argv[])
{
    cout << "binary search : " << endl;
    int arr[] = {10, 20, 20, 30, 50, 80, 90};
    int n = 50;
    int x = sizeof(arr) / sizeof(arr[0]);

    int ans = binarySearch(arr, 90, x);

    cout << ans << endl;
    (ans == -1) ? cout << "Element is not present in array" : cout << "Element is present at index " << ans;
    return 0;
}
