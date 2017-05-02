#include <iostream>
#include <string>
using namespace std;
int findPattern(string S, string W) {
  int c = 0;
  int index = 0;
  int subStrlen = W.size();
  int len = 0;
  string::size_type m;
  string::size_type m1;
  for (string::iterator itr = S.begin(); itr != S.end(); itr++) {
    m = S.find(W[index]);

    if (m != string::npos) {
      if (index == 0)
        m1 = m;
      S.erase(0, m1);
      S.erase(m, 1);
      len++;
      index = (index + 1) % subStrlen;
      if (len == subStrlen) {
        c++;
        len = 0;
      }
    } else {
      len = 0;
      return c;
    }
  }
  return c;
}
int main() {
  string S, W;
  int count;
  int t;
   cin >> t;
  while (t--) {
     cin >> S;
     cin >> W;
    count = findPattern(S, W);
    cout << count << endl;
  }

  return -1;
}