#include <iostream>
#include <string>
using namespace std;
int main() {
  string s = "61 8 48 767 675 465 323 95 91 212 156 201 210 240 265 261 270 "
             "401 393 388 425 558 556 502 478 598 563 587 646 621 754 689 686 "
             "696 713 702 757 993 967 870 837 829 925 920 999 ";
  int i = 0;
  int len = s.length();
  while (s[i] != '\0') {
    if (s[i] == ' ')
      s[i] = ',';
    i++;
  }
  cout << "{" << s << "}";

  return -1;
}
