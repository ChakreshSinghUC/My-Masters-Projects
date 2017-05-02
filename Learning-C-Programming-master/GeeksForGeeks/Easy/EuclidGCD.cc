/**
@Author: Chakresh Singh
@Date: 19/Jan/2017
C++ code to calculate the GCD of two integers using the Euclid's algorithm.
*/
#include <iostream>
using namespace std;
int EuclidGCD(int a, int b) {
  int g;
  if (a == 1 || b == 1)
    return 1;

  while (a != b) {
    if (a > b) {
      a = a % b;
    } else {
      b = b % a;
    }
    if (a > 1 && b > 1)
      g = EuclidGCD(a, b);

    if (a == 0)
      return b;
    else if (b == 0)
      return a;
  }
  return g;
}
int main() {
  int a, b, g;
  a = 55;
  b = 34; // worst case: consecutive Fibonacci pairs.
  if (a >= 0 && b >= 0) {
    g = EuclidGCD(a, b);
    cout << "The GCD of " << a << " and " << b << " is: " << g << endl;
    if (g == 1)
      cout << "Both the numbers are co-primes." << endl;
  }
  return -1;
}
