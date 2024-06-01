#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 4, 76, 54, 8, 21};
    int count = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < count; i++)
    {
        int temp = arr[i], j = i - 1;
        for (; j >= 0; j--)
        {
            if (temp < arr[j])
            {
                arr[j + 1] = arr[j];
                cout << "Shifterd element to right ->" << endl;
            }
            else
            {
                cout << "No need to shift" << endl;
                break;
            }
        }
        cout << "1 outer round completed !!! " << endl;
        cout << "inserting " << temp << " in place of " << arr[j + 1] << endl;
        arr[j + 1] = temp;

        cout << endl;
    }

    cout << "Here is your sorted array :" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}