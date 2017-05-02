// 12-23-2016
// Author: Chakresh Singh
/*
Given an array of integers arr[0..n-1], count all pairs (arr[i], arr[j]) in the
such that i*arr[i] > j*arr[j], 0 =< i < j < n.

Examples:

Input : arr[] = {5 , 0, 10, 2, 4, 1, 6}
Output: 5
 Pairs which hold condition i*arr[i] > j*arr[j]
 are (10, 2) (10, 4) (10, 1) (2, 1) (4, 1)

Input  : arr[] = {8, 4, 2, 1}
Output : 2
*/

#include <iostream>

using namespace std;

void BAD_findPairsFunc(int A[], int n) {
    //Time complexity - O(n^2)
  int count = 0;
  for (int i = 0; i < n - 1; i++)
    for (int j = i + 1; j < n; j++)
      if (i * A[i] > j * A[j]) {
        count++;
        cout << A[i] << " " << A[j] << endl;
      }
  cout << "Count of such pairs = " << count;
}
int main()

{
  int A[] = {5, 0, 10, 2, 4, 1, 6};
  int n = sizeof(A) / sizeof(A[0]);
  cout << "The pairs that satisfy the condition - i*arr[i] > j*arr[j], 0 =< i "
          "< j < n, are: "
       << endl;
  BAD_findPairsFunc(A, n);

  return -1;
}