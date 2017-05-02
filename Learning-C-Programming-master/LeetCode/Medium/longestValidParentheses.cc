#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isValid(string s, int p, int q) {
  bool flag = false;
  stack<char> stk;
  int i = p;
  while (i <= q) {
    
    if (s[i] == '(') {
      stk.push(s[i]);
    }
    if (s[i] == ')' && stk.top() == '(') {
      stk.pop();
      
    }
    i++;
  }
  if (stk.empty())
    flag = true;
  else
    flag = false;

  return flag;
}
int longestValidParentheses(string s) {
  int len = s.length();
  int maxLen = 0;
  for (int i = 0; i < len; i++) {
     for (int j = i; j < len; j++) {
       if ( isValid(s, i, j) == true && maxLen < j - i + 1) {
             maxLen = j - i + 1;
       }
     }
   }
   return maxLen;
}
int main() {
  string s = "((()))((()())()()))((((((())))))";
  int x = longestValidParentheses(s);
cout<<x;
  return -1;
}