/*Given an array of unordered positive and negative integers, find the maximum
subarray sum in the array.
For example:
Array: {2, -9, 5, 1, -4, 6, 0, -7, 8}
Output:
Maximum subarray sum is 9
@ Kadane's algorithm
@ Author: Chakresh Singh
@ Dynamic Programming
*/
#include <iostream>
using namespace std;
int main() {
  int Ar[] = {2, -9, 5, 1, -4, 6, 0, -7, 8};
  int sizeAr = sizeof(Ar) / sizeof(Ar[0]);
  int curSum = 0;
  int maxSum = 0;
  for (int i = 0; i < sizeAr; i++) {
    if (curSum + Ar[i] < 0 ? curSum = 0 : curSum += Ar[i])
      ;
    if (curSum > maxSum)
      maxSum = curSum;
  }
  cout << "Maximum subarray sum in the array is: " << maxSum;
  return -1;
}