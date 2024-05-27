#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
    int original = num;
    int reversed = 0, remainder = 0;

    while (num > 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return original == reversed;
}

long int maxPlaindrome()
{
    long int maxPal = 0;

    for (int i = 100; i < 1000; i++)
    {
        for (int j = i; j < 1000; j++)
        {
            int product = i * j;
            if (isPalindrome(product) && product > maxPal)
            {
                maxPal = product;
            }
        }
    }

    return maxPal;
}

int main()
{
    long int result = maxPlaindrome();
    cout << result << endl;
    return 0;
}