#include <iostream>
using namespace std;

int main()
{
    int *ptr;

    cout << ptr << endl; // it contains garbage value

    // initializing it to nullpointer
    ptr = nullptr;

    // now it contains zero (0)
    cout << ptr << endl;
    return 0;
}