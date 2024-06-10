#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int heightChecker(vector<int> &heights)
    {
        vector<int> sortedVec;
        int sum = 0, n = heights.size();

        copy(heights.begin(), heights.end(), back_inserter(sortedVec));
        sort(sortedVec.begin(), sortedVec.end());

        for (int i = 0; i < n; i++)
        {
            cout << sortedVec[i] << endl;
        }

        for (int i = 0; i < n; i++)
        {
            if (heights[i] != sortedVec[i])
            {
                sum++;
                cout << " Count on " << heights[i] << " & " << sortedVec[i] << " now : " << sum << endl;
            }
        }
        return sum;
    }
};

int main()
{
    Solution st;
    vector<int> heights;
    heights.push_back(1);
    heights.push_back(1);
    heights.push_back(4);
    heights.push_back(2);
    heights.push_back(1);
    heights.push_back(3);
    int result = st.heightChecker(heights);
    cout << result << endl;
    return 0;
}