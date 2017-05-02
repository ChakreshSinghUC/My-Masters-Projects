/**
@Author: Chakresh Singh
@Date: 23/Jan/2017
C++ code to calculate the GCD of two integers using the Euclid's algorithm.
*/
#include <iostream>
using namespace std;
int EuclidGCD(int a, int b) {
  int r;
  if (b == 0)
    return a;
  else {
    r = a % b;
    EuclidGCD(b, r);
  }
}
int main() {
  int a, b, g;
  a = 55;
  b = 5; // worst case: consecutive Fibonacci pairs.
  if (a >= 0 && b >= 0) {
    g = EuclidGCD(a, b);
    cout << "Start \nThe GCD of " << a << " and " << b << " is: " << g
         << "\nEnd.";
    if (g == 1)
      cout << "Start \nBoth the numbers are co-primes.\nEnd.";
  }
  return -1;
}