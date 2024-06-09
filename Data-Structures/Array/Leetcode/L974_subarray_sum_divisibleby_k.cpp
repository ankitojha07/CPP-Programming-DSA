#include <bits/stdc++.h>
using namespace std;

// L974

// Given an integer array nums and an integer k, return the number of non-empty subarrays that have a sum divisible by k.

// A subarray is a contiguo us part of an array.

class Solution
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> sums(k, 0);
        sums[0]++;
        int count = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = (sum + nums[i] % k + k) % k;
            count += sums[sum];
            sums[sum]++;
        }
        return count;
    }
};

int main()
{
    vector<int> nums;
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(0);
    nums.push_back(-2);
    nums.push_back(-3);
    nums.push_back(1);

    int k = 5;
    Solution st;
    int result = st.subarraysDivByK(nums, k);
    cout << result << endl;
    return 0;
}