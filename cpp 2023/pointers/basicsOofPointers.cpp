#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    int c = 100;

    // cout<<&a<<endl;
    // cout<<&c<<endl;
    int *b = &a;

    cout << b<<endl;
    
    cout << &b << endl;
    
    int **aptr = &b;

    cout<< aptr<<endl;

// important concepts here
// & bucket = address
// * address = bucket

// suppose we do a int * ptr = &x;
// soooooo, when we print ptr we'll get the address of x, which is &x;
// buttttt, when we print *ptr then we will get the bucket of the &x and it will be the value.


int x = 10;
int y = x;  // here y is a new bucket created with the value of x


// but, if we do
int &z = x; // here z is not a new bucket it will just start pointing to the same bucket as the x
// one more thing whenever you are creating a reference variable you have to declare it at same time, it can't be declared later

cout<< &x<< endl << &z << endl; // it will give the same value

// buttttt, if we try to prnt the address of x & y, then it will not be the same

cout << &x << " " << &y << endl;

int test = 123;

int *test2 = &test;

cout << *test2 << endl;



    return 0;
}