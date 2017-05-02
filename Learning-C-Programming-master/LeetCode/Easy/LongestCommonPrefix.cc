#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string S_prefix(int i, vector<string> &strs)
{
    string p = "";
    int k = 0;
    string s1, s2;
    s1 = strs[i];
    s2 = strs[i + 1];

    while (s1[k] != '\0')
    {
        if (s1[k] == s2[k])
            p += s1[k];
        else
            return p;
        k++;
    }
    k = 0;

    return p;
}
string longestCommonPrefix(vector<string> &strs)
{

    if (strs.size() == 0)
        return "";

    if (strs.size() == 1)
        return strs[0];
    for (string s1 : strs)
    {
        if (s1.size() == 0)
            return "";
    }
    vector<string> vec;
    string s;
    string prefix = "";
    sort(strs.begin(), strs.end());

    for (int i = 0; i < strs.size() - 1; i++)
    {
        prefix = S_prefix(i, strs);
        vec.push_back(prefix);
        if (prefix.size() == 0)
            return "";
    }
    sort(vec.begin(), vec.end());
    return *vec.begin();
}
int main()
{
    vector<string> strs;
    strs.push_back("cd");
    strs.push_back("c");
    strs.push_back("c");
    strs.push_back("cg");
    cout << longestCommonPrefix(strs) << endl;
}