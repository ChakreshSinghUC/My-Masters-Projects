/*Given an array of integers, find two non-overlapping contiguous sub-arrays
such that the absolute difference between the sum of two sub-arrays is maximum.
@Author: Chakresh Singh
@Date: 5 Mar 2017*/
#include <iostream>

using namespace std;
template <class T> const T &max(const T &a, const T &b) {
  return (a < b) ? b : a; // or: return comp(a,b)?b:a; for version (2)
}
int printMinSumSubArray(int A[], int size, int &startIndex, int &endIndex) {
  int minSum = A[0];
  int newSum = minSum;
  /*int startIndex = 0;
  int endIndex = 0;*/
  int k = 1;

  while (k < size) {

    for (int i = k; i < size; i++) {
      newSum += A[i];
      if (newSum < minSum) {
        minSum = newSum;
        startIndex = k - 1;
        endIndex = i;
      }
    }

    newSum = A[k];
    k++;
  }
  minSum = 0;
  for (int i = startIndex; i <= endIndex; i++) {
    minSum += A[i];
  }
  return minSum;
}

int printMaxSumSubArray(int A[], int start, int end) {
  int size = end - start + 1;
  int maxSum = A[0];
  int newSum = maxSum;
  int startIndex = start;
  int endIndex = start;
  int k = start + 1;
  while (k < size) {
    for (int i = k; i < size; i++) {
      newSum += A[i];
      if (newSum > maxSum) {
        maxSum = newSum;
        startIndex = k - 1;
        endIndex = i;
      }
    }
    newSum = A[k];

    k++;
  }
  maxSum = 0;
  for (int i = startIndex; i <= endIndex; i++) {
    maxSum += A[i];
  }
  return maxSum;
}

int printMinSumSubArray2(int A[], int start, int end) {

  int size = end - start + 1;
  int minSum = A[start];
  int newSum = minSum;
  int startIndex = start;
  int endIndex = start;
  int k = start + 1;
  while (k < size) {

    for (int i = k; i < size; i++) {
      newSum += A[i];
      if (newSum < minSum) {
        minSum = newSum;
        startIndex = k - 1;
        endIndex = i;
      }
    }

    newSum = A[k];
    k++;
  }
  minSum = 0;
  for (int i = startIndex; i <= endIndex; i++) {
    minSum += A[i];
  }
  return minSum;
}

int printMaxSumSubArray2(int A[], int size, int &startIndex2, int &endIndex2) {
  int maxSum = A[0];
  int newSum = maxSum;
  /*int startIndex = 0;
  int endIndex = 0;*/
  int k = 1;
  while (k < size) {
    for (int i = k; i < size; i++) {
      newSum += A[i];
      if (newSum > maxSum) {
        maxSum = newSum;
        startIndex2 = k - 1;
        endIndex2 = i;
      }
    }
    newSum = A[k];

    k++;
  }
  maxSum = 0;
  for (int i = startIndex2; i <= endIndex2; i++) {
    maxSum += A[i];
  }
  return maxSum;
}

int main() {
  int a, b, c, d, e, f, g, h;
  int A[] = {778,  -794, -387, 650,  -363, -691, -764, 541,  173,  212,  568,
             -783, 863,  -68,  -930, 23,   70,   -394, 12,   230,  -422, -785,
             -199, 316,  414,  92,   957,  -863, 997,  -306, -85,  -337, -847,
             -314, -125, -583, -815, -435, 44,   88,   277,  789,  404,  -755,
             -933, 677,  740,  227,  95,   -796, 435,  468,  -98,  318,  653,
             302,  287,  -866, -445, -441, -32,  -98,  -482, -710, -568, 498,
             -587, -307, -220, 529,  -733, -504, -271, 709,  -341, -797, -619,
             -847, -922, -380, 765,  842,  194,  35};
  int size = sizeof(A) / sizeof(A[0]);
  int startIndex = 0;
  int endIndex = size;
  int startIndex2 = 0;
  int endIndex2 = 0;

  if (size == 1)
    cout << 0 << endl;
  else {
    a = printMinSumSubArray(A, size, startIndex, endIndex);
    b = printMaxSumSubArray(A, 0, startIndex);
    c = printMaxSumSubArray(A, endIndex, size - 1);
    ((c > b) ? d = c - a : d = b - a);

    e = printMaxSumSubArray2(A, size, startIndex2, endIndex2);
    f = printMinSumSubArray2(A, 0, startIndex2);
    g = printMinSumSubArray2(A, endIndex2, size - 1);
    ((g < f) ? h = e - g : h = e - f);
    ((d > h) ? cout << d << endl : cout << f << endl);
  }
  return -1;
}