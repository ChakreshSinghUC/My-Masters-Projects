#include <iostream>
#include <string.h>
using namespace std;
int main() {
  const char haystack[20] = "TutorialsPoint";
  const char needle[10] = "Point";
  char *ret;
  cout << strstr(haystack, needle);
  // cout << ret;
}