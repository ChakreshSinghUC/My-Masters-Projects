#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, multiset<string>> mp;
    for (string s : strs)
    {
        string t = s;
        sort(t.begin(), t.end());
        mp[t].insert(s);
    }
    vector<vector<string>> anagrams;
    for (auto m : mp)
    {
        vector<string> anagram(m.second.begin(), m.second.end());
        anagrams.push_back(anagram);
    }
    return anagrams;
}
int main()
{
    vector<string> s = {"ate", "eat", "tea"};
    vector<vector<string>> str = groupAnagrams(s);

    for (int i = 0; i < str.size(); i++)
    {
        for (int j = 0; j < str[i].size(); j++)
        {
            cout << str[i][j] << endl;
        }
    }

    return -1;
}