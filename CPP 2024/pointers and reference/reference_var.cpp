#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int d = 200;
    int &a = d;

    cout << "Value of d is : " << d << endl;
    cout << "Value of &a is : " << &a << endl;
    cout << "Value of a is : " << a << endl;
    cout << "Value of &d is : " << &d << endl;

    return 0;
}
