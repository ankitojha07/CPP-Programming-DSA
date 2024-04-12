#include <iostream>
using namespace std;

class Hero
{

    // prperties of class
    int health; // size will be 4

    char a; // size will be 1

    int total; // size will be 4
};

int main(int argc, char const *argv[])
{
    Hero h1;

    cout << "Size of class : " << sizeof(h1) << endl;
    return 0;
}
