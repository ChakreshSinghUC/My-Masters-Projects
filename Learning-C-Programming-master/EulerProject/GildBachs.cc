/*It was proposed by Christian Goldbach that every odd composite number can be
 * written as the sum of a prime and twice a square.  9 = 7 + 2×12 15 = 7 + 2×22
 * 21 = 3 + 2×32 25 = 7 + 2×32 27 = 19 + 2×22 33 = 31 + 2×12  It turns out that
 * the conjecture was false.  What is the smallest odd composite that cannot be
 * written as the sum of a prime and twice a square?*/
#include <cmath>
#include <iostream>
using namespace std;
bool isPrime(int n) {
  int sqrt_n;
  sqrt_n = (int)sqrt(n);
  bool flag = false;
  if (n <= 2) {
    return true;
  }

  while (!flag) {

    for (int i = 2; i < sqrt_n; i++) {
      if (n % i == 0)
        flag = true;
    }
  }
  return flag;
}

void conjectureTureUpto() {

  bool flag = true;
  int i = 3;
  int prime = 1;
  int y = 0;
  cout << isPrime(43);
  /*while (flag) {
    // odd = prime(odd)+square(even)
    // Note: if square even imples its square of an even number.

    i += 2;
  }*/
}
int main() {
  // conjectureTureUpto();
  cout << (int)sqrt(43);
  return -1;
}