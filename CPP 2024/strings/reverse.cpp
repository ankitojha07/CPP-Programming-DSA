#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int start = 0, end = s.size() - 1;
        while (start < end)
        {
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
    }
};

int main()
{
    Solution st;
    vector<char> *s = new vector<char>();
    s->push_back('H');
    s->push_back('E');
    s->push_back('L');
    s->push_back('L');
    s->push_back('O');

    cout << endl;

    st.reverseString(s);

    for (int i = 0; i < s->size(); i++)
    {
        cout << (*s)[i] << " ";
    }

    cout << endl;
    return 0;
}