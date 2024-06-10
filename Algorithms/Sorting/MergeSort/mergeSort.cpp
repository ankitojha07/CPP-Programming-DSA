#include <iostream>
using namespace std;

void merge(int *arr, int start, int end)
{
    int mid = (start + end) / 2;

    // now we have to create 2 dummy arrays (left and right) to store left and right part of the array
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int left[len1];
    int right[len2];

    // create an index to manage mainArray elements
    int mainArrayIndex = start;

    // Copy left part of the main array in these respective arrays
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[mainArrayIndex++];
    }

    // increase mainArrayIndex to mid+1 so that we can copy 2nd half of the main array into the right part of the array
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[mainArrayIndex++];
    }

    // start merging left and right array according to the size of elements
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    // this is for equal size of both left and right arrays
    while (index1 < len1 && index2 < len2)
    {
        if (left[index1] < right[index2])
        {
            arr[mainArrayIndex++] = left[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = right[index2++];
        }
    }

    // but, if left and right array has different size, we have to check it individually
    while (index1 < len1)
    {
        arr[mainArrayIndex++] = left[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex++] = right[index2++];
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

    // call merge sort for left part of array to sort
    mergeSort(arr, start, mid);

    // calling merge sort for right part of the array
    mergeSort(arr, mid + 1, end);

    // start merging the both sorted array
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