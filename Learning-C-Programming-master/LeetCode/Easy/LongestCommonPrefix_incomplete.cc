//Write a function to find the longest common prefix string amongst an array of strings.
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
  public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string prefix = "";
        if (strs.size() == 0)
            return prefix;

        /** check char by char, for each char, check all the string word **/
        for (int k = 0; k < strs[0].size(); k++)
        {
            int i = 1;
            for (; i < strs.size() && strs[i].size() > k; i++)
            {
                if (strs[i][k] != strs[0][k])
                    return prefix;
            }
            if (i == strs.size())
                prefix += strs[0][k];
        }
        return prefix;
    }
};

int main()
{
    Solution obj;
    vector<string> vec;
    vec.push_back("aaab");
    vec.push_back("aaa");
    vec.push_back("ae");

    cout << obj.longestCommonPrefix(vec);
    return -1;
}