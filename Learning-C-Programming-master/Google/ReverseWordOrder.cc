// Problem

// Given a list of space separated words, reverse the order of the words. Each
// line of text contains L letters and W words. A line will only consist of
// letters and space characters. There will be exactly one space character
// between each pair of consecutive words.

// Input

// The first line of input gives the number of cases, N.
// N test cases follow. For each test case there will a line of letters and
// space characters indicating a list of space separated words. Spaces will not
// appear at the start or end of a line.

// Output

// For each test case, output one line containing "Case #x: " followed by the
// list of words in reverse order.

// Limits

// Small dataset

// N = 5
// 1 ≤ L ≤ 25

// Large dataset

// N = 100
// 1 ≤ L ≤ 1000
//@Date: 13 Mar 2017
#include <iostream>
#include <stack>
#include <string>
using namespace std;

void reverseWords(string s) {

  stack<char> st;
  stack<char> st1;
  stack<char> st2;
  int i = 0;
  while (s[i] != '\0') {
    st.push(s[i]);
    st1.push(s[i]);
    i++;
  }
  while (!st.empty()) {
    cout << st.top();
    st.pop();
  }
  cout << endl;
  while (!st1.empty()) {
    if (st1.top() != ' ') {
      st2.push(st1.top());
      st1.pop();
    } else if (st1.top() == ' ') {
      while (!st2.empty()) {
        cout << st2.top();
        st2.pop();
      }
      cout << " ";
      st1.pop();
    }
  }
  while (!st2.empty()) {
    cout << st2.top();
    st2.pop();
  }
}
int main() {
  string s = "This is a string";
  reverseWords(s);
  return -1;
}