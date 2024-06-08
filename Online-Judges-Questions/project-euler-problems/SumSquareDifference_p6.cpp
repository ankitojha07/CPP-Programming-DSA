#include <iostream>
using namespace std;

int sumSquare(int n)
{
    int i = 1;
    int res = 0;
    while (i <= n)
    {
        res += i * i;
        i++;
    }
    return res;
}

int squareSum(int n)
{
    int i = 1, res = 0;
    while (i <= n)
    {
        res += i;
        i++;
    }
    return res * res;
}

int main()
{
    int n = 100;
    int sumOfSquare = sumSquare(n);
    int squareOfSum = squareSum(n);
    cout << sumOfSquare << endl;
    cout << squareOfSum << endl;

    int differece = squareOfSum - sumOfSquare;
    cout << "Difference is : " << differece << endl;
    return 0;
}