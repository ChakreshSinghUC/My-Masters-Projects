#include <iostream>
#include <string>
#include <unordered_map>
#include <cassert>
using namespace std;
bool isDIstinct(unordered_map<int, char> m, string s, int start, int end)
{
    bool flag = true;
    unordered_map<int, char>::iterator itr = m.find(s[end]);

    if (start < itr->first && itr->first < (end - 1))
        flag = false;

    return flag;
}
int lengthOfLongestSubstring(string s)
{
    unordered_map<int, char> m;
    for (int i = 0; i < s.length(); i++)
    {
        m[i] = s[i];
    }
    int len = 0;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i + 1; j < s.length(); j++)
        {
            if (isDIstinct(m, s, i, j))
                len = max(len, j - i);
        }
    }
    return len;
}
int main()
{
    string s = "pweekwa";
    cout << lengthOfLongestSubstring(s) << endl;
}