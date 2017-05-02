/*Given a dictionary of words and a string of characters, find if the string of
characters can be broken into individual valid words from the dictionary.
Example:
Dictionary: arrays, dynamic, heaps, IDeserve, learn, learning, linked, list,
platform, programming, stacks, trees
String    : IDeservelearningplatform
Output   : true
Because the string can be broken into valid words: IDeserve learning platform*/
#include <iostream>
#include <set>
#include <string>
#include <vector>
// needs debugging.. Last word is being scanned twice.
using namespace std;
// Global variables:
string dict[] = {"arrays",   "dynamic",     "heaps",  "IDeserve",
                 "learn",    "learning",    "linked", "list",
                 "platform", "programming", "stacks", "trees"};
int n = sizeof(dict) / sizeof(dict[0]);
set<string> dictSet(dict, dict + n);
class WordBreakProblem {

public:
  bool hasValidWords(string words) {
    if (words.empty() || words.length() == 0) {
      return true;
    }
    int n = words.length();
    bool validWords[n];
    for (int i = 0; i < n; i++) {
      if (dictSet.find(words.substr(0, i + 1)) != dictSet.end()) {
        validWords[i] = true;
      }
      if (validWords[i] == true && (i == n - 1))
        return true;
      if (validWords[i] == true) {
        for (int j = 0; j < n - i; j++) {
          if (dictSet.find(words.substr(i + 1, j + 1)) != dictSet.end()) {
            /* cout << "2: " << i + 1 + j << "\t" << words.substr(i + 1, j + 1)
                  << endl;*/
            validWords[i + 1 + j] = true;
          }
          if (j == n - 1 && validWords[i + 1 + j] == true) {
            return true;
          }
        }
      }
    }
    return false;
  }
};

int main() {
  WordBreakProblem obj;

  if (obj.hasValidWords("IDeservelearningplatformlinked"))
    cout << "Valid!";
  else
    cout << "Invalid.";
  return -1;
}