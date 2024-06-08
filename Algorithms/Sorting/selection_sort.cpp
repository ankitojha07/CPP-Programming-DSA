#include <iostream>
using namespace std;

int main()
{
    int arr[] = {43, 12, 56, 87, 9, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        int smallest = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                smallest = arr[i];
                arr[i] = arr[j];
                arr[j] = smallest;
            }
        }
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}