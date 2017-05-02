// Determine whether an integer is a palindrome. Do this without extra space.

#include <cmath>
#include <iostream>
#include <stack>
using namespace std;
bool isPalindrome(long int a) {
  stack<int> s;
  unsigned long int t = abs(a);
  a = t;
  while (a != 0) {

    s.push(a % 10);
    a /= 10;
  }
  int b = 0;
  while (!s.empty()) {
    b = b * 10 + s.top();

    s.pop();
  }

  return (t == b) ? true : false;
}
int main() {
  long int a = -2147483648;
  cout << isPalindrome(a);
  return -1;
}
