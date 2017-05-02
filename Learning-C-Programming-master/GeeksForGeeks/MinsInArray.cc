#include <algorithm>
#include <iostream>
using namespace std;
int tempA[100];
int tempB[100];
int flag;

int findMin(int T[], int size) {
  int a = 0;
  for (int i = 1; i < size; i++) {
    if (T[i] < T[a]) {
      a = i;
    }
  }
  return a;
}
int findMinSum(int A[], int B[], int count, int size) {
  int a, b;
  a = findMin(A, si ze);
  b = findMin(B, size);
  int s;
  int tempSum = 10000000;
  if (count > 1) {
    tempSum = tempA[0];
    for (int i = count - 1; i > 0; i--) {
      if (tempA[0] < tempA[i])
        tempSum += tempA[i];
    }
  }
  if (a == b) {
    if (flag == 1)
      a = count;
    else if (flag == 2)
      b = count;
    s = (tempA[a] + tempA[count - 1]);
    if (tempSum < s)
      return tempSum;
    else
      return s;
  }
  return (A[a] + B[b]);
}

int main() {
  int count = 0;

  int A[] = {1, 2, 2};
  int B[] = {1, 2, 3};
  int size = sizeof(A) / sizeof(A[0]);
  for (int i = 0; i < size; i++) {
    tempA[i] = A[i];
    tempB[i] = B[i];
  }
  sort(tempA, tempA + size);
  sort(tempB, tempB + size);

  flag = 0;

  for (int i = 0; i < size; i++) {
    if (tempA[i] == tempB[i])
      count++;
  }

  if (tempA[count] < tempB[count])
    flag = 1;
  else
    flag = 2;
  if (size == 1)
    cout << -1 << endl;
  else
    cout << findMinSum(A, B, count, size);
  return -1;
}