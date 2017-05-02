/*Given an array of strings, group anagrams together.
For example, given: ["eat", "tea", "tan", "ate", "nat", "bat"],
Return:

[
  ["ate", "eat","tea"],
  ["nat","tan"],
  ["bat"]
]*/
// https://leetcode.com/problems/anagrams/#/description
/*Logic: Sort each word separately.
Treat the sorted word as a key.
Words that are anarams must have same key.
Push the words with same keys, to same index in a vector of vectors of
strings.*/
#include <algorithm>
#include <cassert>
#include <cstring>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#define ALPHABET_SIZE (26)
#define ARRAY_SIZE(a) sizeof(a) / sizeof(a[0])
using namespace std;
vector<vector<string>> groupAnagrams(vector<string> &words_vec)
{
  map<string, int> m;
  int p = 0;
  vector<string> words_list = words_vec;
  vector<string> words_sorted = words_vec;
  vector<vector<string>> v;
  int size = words_sorted.size();
  for (int i = 0; i < size; i++)
  {
    sort(words_sorted[i].begin(), words_sorted[i].end());
    if (m.find(words_sorted[i]) == m.end())
    {
      m[words_sorted[i]] = p;
      p++;
    }
    map<string, int>::iterator itr = m.find(words_sorted[i]);
    assert(itr != m.end());
   // cout << itr->first << "\t" << itr->second << "\t" << words_list[i] << endl;
    v[itr->second].push_back(words_list[i]);
  }
  return v;
}
int main()
{

  string words[] = {"eat", "tea", "tan", "ate", "nat", "bat"};
  int size = ARRAY_SIZE(words);
  vector<string> words_vec(words, words + size);
  vector<vector<string>> v = groupAnagrams(words_vec);
}