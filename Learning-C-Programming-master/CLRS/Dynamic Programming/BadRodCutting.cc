// Page number: 360 of book: Introduction to Algorithms by CLRS, Third edition
// Recursive approach to the rod cutting problem
// Note: This is not Dynamic Programming approach
// Author: Chakresh Singh
// Date: 12-21-2016
#include <iostream>

using namespace std;
int count = 0;
int max(int a, int b) {
  // a util function..
  return (a > b ? a : b);
}
int cut_rod(int p[], int n) {

  int q = -1000; // set revenue to minus infinity
  if (n == 0)
    return 0;
  else
    for (int i = 0; i < n; i++)
      // recursively calling the rod_cut function
      // Time complexity T(n) = Order of 2^n
      q = max(q, (p[i] + cut_rod(p, n - i - 1)));
  count++;
  return q;
}

int main() {
  int p[10] = {1,  5,  8,  9,  10,
               17, 17, 20, 24, 30}; // taken as is, from the book's example
  for (int i = 0; i < 10; i++)
    cout << "\nThe revenue for rod of lenght" << i + 1
         << " is: " << cut_rod(p, i + 1);
  cout << "\nCount: " << count;
  return 0;
}