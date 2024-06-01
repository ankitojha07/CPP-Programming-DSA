#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 4, 76, 54, 8, 21};
    int count = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = 0;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << endl;
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}