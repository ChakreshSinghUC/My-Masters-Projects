/*
https://leetcode.com/problems/longest-substring-without-repeating-characters/#/description
Given a string, find the length of the longest substring without repeating
characters.

Examples:

Given "abcabcbb", the answer is "abc", which the length is 3.

Given "bbbbb", the answer is "b", with the length of 1.

Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer
must be a substring, "pwke" is a subsequence and not a substring.*/
//@Name: Chakresh Singh
//@Date: 14-Mar-2017
#include <iostream>
#include <string>

using namespace std;
int max(int a, int b) { return (a > b) ? a : b; }
bool isNew(string s, char c, int left, int right) {
  bool flag = true;
  for (int i = left; i <= right; i++) {
    if (s[i] == c) {
      flag = false;
      break;
    }
  }
  return flag;
}
int longestSubString(string s) {
  int m = 0;

  int size = s.length();

  int mat[size][size];

  for (int i = 0; i < size; i++) {
    for (int j = i; j < size; j++) {
      if (i == j)
        mat[i][j] = 1;
      else
        mat[i][j] = 0;
    }
  }
  for (int j = 0; j < size; j++) {
    for (int i = j; i < size; i++) {

      if (i > j) {
        if (isNew(s, s[i], j, i - 1) && mat[i - 1][j] != 0)
          mat[i][j] = mat[i - 1][j] + 1;
        else {
          mat[i][j] = 0;
        }
      }
      m = max(m, mat[i][j]);
    }
  }
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }
  return m;
}
int main() {
  string s = "chakreshsingh";
  cout << longestSubString(s);
  return -1;
}