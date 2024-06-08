#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> vec1, vec2;
    // vec1.push_back(1);
    vec2.push_back(1000000);
    cout << "Vector Size = " << vec2.at(0).size() << endl;

    return 0;
}