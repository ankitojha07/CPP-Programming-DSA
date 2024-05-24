#include <iostream>
using namespace std;

int secLarge(int arr[], int n)
{
    int largest = arr[0];
    int secondLargest = -1;

    // by using below code we are solving this problem in TC= O(n)
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }

    // this below code will cause TC = O(2n) because one loop for largest element is running above and second one is running here
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > secondLargest && arr[i] != largest)
    //     {
    //         secondLargest = arr[i];
    //     }
    // }

    cout << "Second Largest Element in array is : " << secondLargest << endl;
    return largest;
}

int main()
{
    int arr[] = {2, 4, 6, 13, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largestElement = secLarge(arr, n);
    cout << "Largest Element in Array is :  " << largestElement << endl;
}