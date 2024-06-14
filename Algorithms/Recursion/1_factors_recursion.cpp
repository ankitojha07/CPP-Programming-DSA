#include <iostream>
using namespace std;

unsigned long long int factor(unsigned long long int num)
{
    if (num == 0)
        return 1;

    else
        return num * factor(num - 1);
}

int main()
{
    unsigned long long int n = 65;
    unsigned long long int result = factor(n);
    cout << result << endl;
    return 0;
}

// 65 is the limirt for this code