/**
Given an array, the task is to calculate the sum of lengths of contiguous
subarrays having all elements distinct.

Probably WRONG Answer...

*/
#include <iostream>
#include <tr1/unordered_set>

using namespace std;

int countSubArrays(int A[], int n) {

  int count = 0;
  int temp;
  int sunArraylength = 1;
  int t = 0;
  tr1::unordered_set<int> s;
  for (int i = 0; i < n; i++) {
    s.insert(A[i]);
  }

  for (auto itr = s.begin(); itr != s.end(); ++itr) {
    cout << *itr << " ";
  }
  n = s.size();
  while (sunArraylength <= n) {
    count += (n - sunArraylength + 1) * sunArraylength;
    sunArraylength++;
  }
  return count;
}

int main() {
  int A[] = {1, 2, 3, 3, 0, 1, 3, 2, 4};
  int n = sizeof(A) / sizeof(A[0]);
  cout << "Count: " << countSubArrays(A, n) << endl;
  cout << "The sub arrays are as follows: " << endl;
  return 0;
}