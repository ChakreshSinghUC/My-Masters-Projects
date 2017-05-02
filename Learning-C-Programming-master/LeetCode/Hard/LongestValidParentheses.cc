/***
Given a string containing just the characters '(' and ')', find the length of
the longest valid (well-formed) parentheses substring.
For "(()", the longest valid parentheses substring is "()", which has length =
2.
Another example is ")()())", where the longest valid parentheses substring is
"()()", which has length = 4.
***/
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int longestValidPara(string s) {
  int len = 0;
  int m = 0;
  int i = 0;
  stack<char> stk;
  while (s[i] != '\0') {
    if (s[i] == '(')
      stk.push('(');

    else if (s[i] == ')' && stk.top() == '(') {
      len++;
      stk.pop();
    }

    else if (s[i] == ')' && (stk.top() != '(' || stk.empty())) {
      m = max(m, len);
      len = 0;
      while (!stk.empty())
        stk.pop();
    }
    i++;
  }

  return m;
}
int main() {
  string s;
  s = ")()())";
  int a = longestValidPara(s);
  cout << a << endl;

  return -1;
}