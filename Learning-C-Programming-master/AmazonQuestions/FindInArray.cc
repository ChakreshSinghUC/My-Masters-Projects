#include <algorithm>
#include <iostream>

using namespace std;
int main() {
  int A[] = {5, 4, 6, 10, 7, 8, 9, 11, 23, 40};
  int size = sizeof(A) / sizeof(A[0]);
  int B[100];
  for (int i = 0; i < size; i++) {
    B[i] = A[i];
  }
  sort(A, A + size);
  for (int i = 0; i < size; i++) {
    if (A[i] == B[i])
      cout << i << " " << A[i] << endl;
  }
  return -1;
}
