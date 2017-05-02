#include <iostream>
#include <string>
using namespace std;
int romanToInteger(string s) {
  int res = 0;
  int i = 0;
  int d = 0;
  int carry = 0;
  while (s[i] != '\0') {
    switch (s[i]) {
    case 'I':
      d = 1;
      break;
    case 'V':
      d = 5;
      break;
    case 'X':
      d = 10;
      break;
    case 'L':
      d = 50;
      break;
    case 'C':
      d = 100;
      break;
    case 'D':
      d = 500;
      break;
    case 'M':
      d = 1000;
      break;
    }
    if (s[i] == 'D' && s[i + 1] == 'M') {
      carry = -500;
      d = 0;
    }

    else if (s[i] == 'C' && (s[i + 1] == 'M' || s[i + 1] == 'D')) {
      carry = -100;
      d = 0;
    } else if ((s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C' ||
                                s[i + 1] == 'D' || s[i + 1] == 'M'))) {
      carry = -10;
      d = 0;
    }

    else if (s[i] == 'I' &&
             (s[i + 1] == 'V' || s[i + 1] == 'X' || s[i + 1] == 'L' ||
              s[i + 1] == 'C' || s[i + 1] == 'D' || s[i + 1] == 'M')) {
      carry = -1;
      d = 0;
    }

    res = res + d + carry;
    carry = 0;
    i++;
  }
  return res;
}
int main() {
  string s = "DCXXI";
  cout << romanToInteger(s);
  return 0;
}