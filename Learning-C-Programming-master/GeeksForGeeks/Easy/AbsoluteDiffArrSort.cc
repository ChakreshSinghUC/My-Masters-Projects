/**
Sort an array according to absolute difference with given value

Given an array of n distinct elements and a number x, arrange array elements
according to the absolute difference with x, i. e., element having minimum
difference comes first and so on.
Note : If two or more elements are at equal distance arrange them in same
sequence as in the given array.

Examples :

Input : arr[] : x = 7, arr[] = {10, 5, 3, 9, 2}
Output : arr[] = {5, 9, 10, 3, 2}
Explanation:
7 - 10 = 3(abs)
7 - 5 = 2
7 - 3 = 4
7 - 9 = 2(abs)
7 - 2 = 5
So according to the difference with X,
elements are arranged as 5, 9, 10, 3, 2.

Input : x = 6, arr[] = {1, 2, 3, 4, 5}
Output :  arr[] = {5, 4, 3, 2, 1}

Input : x = 5, arr[] = {2, 6, 8, 3}
Output :  arr[] = {6, 3, 2, 8}
*/
#include <algorithm>
#include <iostream>
#include <map>

using namespace std;
void rearrange(int arr[], int n, int x) {
  multimap<int, int> m;

  // Store values in a map with the difference
  // with X as key
  for (int i = 0; i < n; i++)
    m.insert(make_pair(abs(x - arr[i]), arr[i]));

  // Update the values of array
  int i = 0;
  for (auto it = m.begin(); it != m.end(); it++)
    arr[i++] = (*it).second;
}
// Function to print the array
void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++)
    cout << arr[i] <<endl;
}
int main() {

  int A[] = {10, 5, 3, 9, 2};
  int x = 7;
  int n = sizeof(A) / sizeof(A[0]);

  rearrange(A, n, x);
  printArray(A, n);

  return -1;
} 