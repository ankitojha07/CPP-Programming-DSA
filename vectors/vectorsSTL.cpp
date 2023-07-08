#include <bits/stdc++.h>
using namespace std;


// Vectors : Dynamic containers (Replacement of Array)
int main()
{

    vector<int> arr = {1,2,3,4,5};

    arr.push_back(6);
    cout << arr.capacity() << " is the capacity of this vector." <<endl;
    cout << arr.size() << " is the current size of this vestor." <<endl;

    cout<<"Printing all of the elements of the vector : " << endl;
    for (auto k : arr)
    {
        cout << k << " ";
    }
    cout<< endl;
    
    arr.pop_back();
    cout << arr.capacity() << " is the capacity of this vector." <<endl;
    cout << arr.size() << " is the current size of this vestor." <<endl;

    return 0;
}