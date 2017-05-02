
#include <algorithm>
#include <iostream>
using namespace std;
int sumMat[1000][1000];

int findSum(int A[], int a, int b) {
  int sum = 0;
  if (a <= b) {
    for (int i = a; i <= b; i++)
      sum += A[i];
  }

  return sum;
}
int findPair(int i, int j, int size) {

  int a = i;
  int b = j;
  int max = 0;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (!((a <= i && i <= b) || (a <= j && j <= b)) && (j >= i)) {

        if (sumMat[i][j] > max) {
          max = sumMat[i][j];
        }
      }
    }
  }
  return max;
}
int ma = 0;
void printMinSumSubArray(int A[], int size) {

  for (int i = 0; i < size; i++)
    for (int j = 0; j < size; j++)
      sumMat[i][j] = findSum(A, i, j);

  int minSum = sumMat[0][0];

  for (int i = 0; i < size; i++)
    for (int j = 0; j < size; j++) {
      if (minSum > sumMat[i][j])
        minSum = sumMat[i][j];
    }
  int q = 10000;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      { q = min(q, abs(findPair(i, j, size) - sumMat[i][j])); }
    }
  }
  if (q > ma) {
    ma = q;
  }
}
int main() {
  int A[] = {5, 6, -1, 0, -2, -4, 1, -11, 2, 12, 14, 0, 0, 1, -2};
  int size = sizeof(A) / sizeof(A[0]);
  printMinSumSubArray(A, size);

  cout << ma << endl;
  // cout << minAbsoluteDifference(A, size);

  return -1;
}