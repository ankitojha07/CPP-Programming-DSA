#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 4, 76, 54, 8, 21};
    int count = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}