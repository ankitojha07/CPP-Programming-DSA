#include <iostream>
using namespace std;

void printName(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << " RSVP " << endl;
    i++;
    printName(i, n);
}

int main()
{
    int n = 5, i = 1;
    printName(i, n);
    return 0;
}