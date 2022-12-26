#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    bool swapped;
    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[7] = {1, 4, 2, 76, 8, 32, 9};
    bubbleSort(arr, 7);
    return 0;
}