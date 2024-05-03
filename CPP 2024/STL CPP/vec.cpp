#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myVector;
    myVector.push_back(6);
    myVector.push_back(7);

    for (int i = 0; i < myVector.size(); ++i)
    {
        cout << myVector[i] << " ";
    }
    cout << endl;
    return 0;
}