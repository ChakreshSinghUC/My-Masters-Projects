#include <iostream>
using namespace std;

int firstMissingPositive(int A[], int n) {
  for (int i = 0; i < n; ++i)
    if (A[i] > 0 && A[i] <= n && A[A[i] - 1] != A[i])
      swap(A[i], A[A[i] - 1]);
  for (int i = 0; i < n; ++i)
    cout << A[i] << " ";
  cout << endl;
  for (int i = 0; i < n; ++i)
    if (A[i] != i + 1)
      return i + 1;

  return n + 1;
}
int main() {
  int A[] = {-1, -1, 0, 2, 1, 1, 7, 6, 5};
  int size = sizeof(A) / sizeof(A[0]);
  cout << firstMissingPositive(A, size);
}