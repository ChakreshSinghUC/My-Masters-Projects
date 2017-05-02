#include <iostream>
#include <stack>
using namespace std;
bool isValid(string s) {
  int i = 0;
  stack<char> stk;
  while (s[i] != '\0') {
    if (s[i] == '(' || s[i] == '[' || s[i] == '{')
      stk.push(s[i]);
    if ((s[i] == ')' || s[i] == ']' || s[i] == '}') && stk.empty())
      return false;

    if (s[i] == ')') {
      if (stk.top() == '(')
        stk.pop();
      else
        return false;
    }
    if (s[i] == '}') {
      if (stk.top() == '{')
        stk.pop();
      else
        return false;
    }
    if (s[i] == ']') {
      if (stk.top() == '[')
        stk.pop();
      else
        return false;
    }
    i++;
  }
  if (stk.empty())
    return true;
  else
    return false;
}
int main() {
  string s = ")";
  cout << isValid(s) << endl;
  return -1;
}