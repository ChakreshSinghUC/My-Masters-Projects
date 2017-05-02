/**
Given two integer numbers, the task is to find count of all common divisors of given numbers?

Input : a = 12, b = 24
Output: 6
// all common divisors are 1, 2, 3, 
// 4, 6 and 12

Input : a = 3, b = 17
Output: 1
// all common divisors are 1

Input : a = 20, b = 36
Output: 3
// all common divisors are 1, 2, 4
http://www.practice.geeksforgeeks.org/problem-page.php?pid=1423
*/
#include <iostream>
using namespace std;
int CountCommonDivisors(int a, int b) {
  int m;
  int count = 0;
  m = (a < b) ? a : b;
  for (int i = 1; i <= m; i++)
    if (a % i == 0 && b % i == 0)
      count++;
  return count;
}
int main() {
  int a = 3, b = 17;
  cout << "Count of all common divisors of " << a << " and " << b << " = "
       << CountCommonDivisors(a, b);
  return -1;
}
