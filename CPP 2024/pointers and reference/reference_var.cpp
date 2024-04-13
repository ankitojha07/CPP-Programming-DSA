#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int d = 200, c = 100;
    int &a = d;

    a = 500; // it will update the value of d also

    // references cannot be reassigned to refer to another variable once they are initialized. They are essentially aliases for a variable and cannot be rebound.

    // &a = c;
    // cannot be reassigned

    cout << "Value of d is : " << d << endl;
    cout << "Value of &a is : " << &a << endl;
    cout << "Value of a is : " << a << endl;
    cout << "Value of &d is : " << &d << endl;

    return 0;
}
