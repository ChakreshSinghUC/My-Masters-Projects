/*Given a string of characters consisting of 0 or more spaces, remove all the
spaces from this given string.
Separation of spaces from other characters should be done in-place(without using
extra space). Expected time complexity is O(n).
For example, if the input string is "  Hi, How are you?  " then the output
returned should be "Hi,Howareyou?"*/
#include <iostream>
using namespace std;
int main() {
  char str[] = "Hi, How are you?";
  int sizeStr = sizeof(str) / sizeof(str[0]);
  int i = 0;
  int countspaces = 0;
  while (str[i] != '\0') {
    if (str[i] == ' ') {
      countspaces++;
    } else {

      str[i - countspaces] = str[i];
    }
    i++;
  }
  for (int k = 0; k < (sizeStr - countspaces - 1); k++)
    cout << str[k];
  cout << endl;
  return -1;
}