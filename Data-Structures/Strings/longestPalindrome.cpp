#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int longestPalindrome(string s)
    {
        int odd = 0;
        int charFreq[128] = {0};

        for (char ch : s)
        {
            charFreq[ch]++;
            if (charFreq[ch] % 2 == 1)
            {
                odd++;
            }
            else
            {
                odd--;
            }
        }
        if (odd > 1)
        {
            return s.length() - odd + 1;
        }
        return s.length();
    }
};

int main()
{
    Solution st;

    string s = "abccccdd";
    int result = st.longestPalindrome(s);
    cout << " Result is : " << result << endl;

    return 0;
}