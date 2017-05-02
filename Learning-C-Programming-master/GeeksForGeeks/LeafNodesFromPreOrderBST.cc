#include <iostream>
#include <stack>
using namespace std;

void leafnodes(int a[], int n) {
  stack<int> s;
  int i, j;
  bool f = false;
  for (i = 1, j = 0; i < n && j < n; i++, j++) {
    f = false;
    if (a[j] > a[i])
      s.push(a[j]);
    else {
      while (!s.empty()) {
        if (a[i] > s.top()) {
          s.pop();
          f = true;
        } else
          break;
      }
      if (f)
        cout << a[j] << " ";
    }
  }
  cout << a[j];
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];
    leafnodes(a, n);
    cout << endl;
  }
  return 0;
}