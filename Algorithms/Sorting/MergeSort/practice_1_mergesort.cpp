#include <iostream>
using namespace std;

void merge(int *arr, int start, int end)
{
    int mid = (start + end) / 2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int leftArr[len1];
    int rightArr[len2];

    int mainIndex = start;

    // Copy left part of the main array in these respective arrays
    for (int i = 0; i < len1; i++)
    {
        leftArr[i] = arr[mainIndex++];
    }

    // Copy right part of the main array in these respective arrays
    mainIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        rightArr[i] = arr[mainIndex++];
    }

    // start merging left and right array according to the element
    int index1 = 0, index2 = 0;
    mainIndex = start;

    // this is for equal size of both left and right arrays
    while (index1 < len1 && index2 < len2)
    {
        if (leftArr[index1] < rightArr[index2])
        {
            arr[mainIndex++] = leftArr[index1++];
        }
        else
        {
            arr[mainIndex++] = rightArr[index2++];
        }
    }

    // but, if left and right array has different size, we have to check it individually
    while (index1 < len1)
    {
        arr[mainIndex++] = leftArr[index1++];
    }

    while (index2 < len2)
    {
        arr[mainIndex++] = rightArr[index2++];
    }
}

void mergeSort(int *arr, int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }

    int mid = (start + end) / 2;
    // call same function for left part of the array
    mergeSort(arr, start, mid);

    // call same function for right part of the array
    mergeSort(arr, mid + 1, end);

    // after diving array untill 1 element, start merging the array
    merge(arr, start, end);
}

int main()
{
    int arr[] = {15, 23, 74, 89, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << " Size of array is : " << n << endl;
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}