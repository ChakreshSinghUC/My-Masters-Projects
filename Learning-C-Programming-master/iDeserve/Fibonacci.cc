/*In mathematics, the Fibonacci series is defined by the following recurrence
relation:
F(0) = 0
F(1) = 1
F(n) = F(n-1) + F(n-2)
i.e. nth element is formed by adding elements at (n-1) and (n-2)
So, first 10 fibonacci numbers will be:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34

Given a number n, find F(n).
Example:
Input: 6
Output: 8
Input: 10
Output: 55*/
// Dynamic Programming approach
#include <iostream>

using namespace std;
int fibo(int *a, int *b) {
  int t;
  t = *b;
  *b = *a + *b;
  *a = t;

  return *b;
}

int main() {
  int a = 0;
  int b = 1;
  for (int k = 2; k <= 10; k++)
    cout << k << "th fibonacci number: " << fibo(&a, &b) << "\n";

  return -1;
}