#include <iostream>

using namespace std;
int main() {
  int t, n, A[100];
  cout << "\nEnter T: ";
  cin >> t;
  cout << "\nEnter n: ";
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> A[i];
  if (n > 1)
    for (int i = 0; i < n / 2; i++)
      swap(A[i], A[n - i - 1]);
  for (int i = 0; i < n; i++)
    cout << A[i] << " ";
  cout << endl;
  return -1;
}