#include <algorithm>
#include <iostream>

using namespace std;

void findNums(int A[], int size, int sum) {
  int l = 0;
  int r = size - 1;
  int res;
  sort(A, A + size);

  while (l < r) {
    res = A[l] + A[r];
    if (sum < res)
      r--;
    else if (sum > res)
      l++;
    else if (sum == res) {
      cout << A[l] << ", " << A[r] << endl;
      l++;
      r--;
    }
  }
}

int main() {
  int A[] = {3, 5, 9, 0, 2, 1, 4, 6, 3, 2, 9, 1, 7};
  int size = sizeof(A) / sizeof(A[0]);
  int sum = 10;
  int a;
  findNums(A, size, sum);
  return -1;
}