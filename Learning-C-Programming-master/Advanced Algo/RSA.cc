/**
RSA Cryptosystem.
@Version: 1.0.0.1
@Due Date: 01/Feb/2017
@Group Number: 7
@Authors: Chakresh Singh
*/
#include <algorithm>
#include <cmath>
#include <iostream>
#include <sstream>

using namespace std;
string M = "CKRH";

unsigned long int p, q, e, d, n, phi, C, P;

unsigned long int gcdExt(unsigned long int a, unsigned long int b,
                         unsigned long int *x, unsigned long int *y);

int EuclidGCD(int a, int b) {
  if (a == 0)
    return b;
  return EuclidGCD(b % a, a);
}
unsigned long int powers(unsigned long int x, unsigned long int i) {
  unsigned long int r = 1;
  while (i > 0) {
    if (i % 2 == 0) {
      x = x * x;
      i = i / 2;
    } else {
      r = r * x;
      i = i - 1;
    }
  }
  return r;
}
unsigned long int toBEARCATII(string M) {
  unsigned long int N = 0;
  int stringSize = M.size();
  if (stringSize > 0) {
    string::iterator it;
    int index = stringSize - 1;
    for (it = M.begin(); it < M.end(); ++it, --index) {
      N += powers(27, index) * (int(*it) - 64); // ASCII for "A" is 65.
    }
  }
  return N;
}
string fromBEARCATII(unsigned long int N) {
  string M;
  char ch;
  while (N != 0) {
    ch = N % 27 + 64;
    M.push_back(ch);
    N = N / 27;
  }
  reverse(M.begin(), M.end());

  return M;
}

bool isPrime(int p) {
  if (p <= 1)
    return false;
  else if (p == 2)
    return true;
  else if (p > 2) {
    for (int i = 2; i < sqrt(p); i++) {
      if (p % i == 0)
        return false;
    }
    return true;
  }
}

unsigned long int modInverse(unsigned long int a, unsigned long int m) {

  unsigned long int x, y;
  unsigned long int g = gcdExt(a, m, &x, &y);
  if (g != 1)
    return 100000000;
  else {
    unsigned long int res = (x % m + m) % m;
    return res;
  }
}
unsigned long int gcdExt(unsigned long int a, unsigned long int b,
                         unsigned long int *x, unsigned long int *y) {

  if (a == 0) {
    *x = 0, *y = 1;
    return b;
  }
  unsigned long int x1, y1;
  unsigned long int gcd = gcdExt(b % a, a, &x1, &y1);
  *x = y1 - (b / a) * x1;
  *y = x1;
  return gcd;
}

long long int randomPrime() {
  long long int p = rand() % 100000;
  while (!isPrime(p)) {
    p = rand() % 100000;
  }
  return p;
}
unsigned long int modExp(unsigned long int x, unsigned long int y,
                         unsigned long int p) {
  unsigned long int res = 1;
  x = x % p;
  while (y > 0) {
    if (y & 1)
      res = (res * x) % p;
    y = y >> 1; // y = y/2
    x = (x * x) % p;
  }
  return res;
}

void RSAinit() {

  p = randomPrime();
  q = randomPrime();
  n = p * q;
  phi = (p - 1) * (q - 1);

  do {
    cout << "Enter a valid public key (a positive integer): ";
    cin >> e;
    d = modInverse(e, phi);
  } while (EuclidGCD(e, phi) != 1 || e >= phi || d >= phi || d == 100000000);
  C = modExp(toBEARCATII(M), e, n);
  P = modExp(C, d, n);
}
void printResults() {
  cout << "First Random Prime (p): " << p << endl
       << "Second Random Prime (q): " << q << endl
       << "n = p*q = : " << n << endl
       << "Euler Totient Function: φ(" << n << ") = " << phi << endl
       << "Private Key (d): " << d << endl
       << "Message in BEARCATII Code: " << toBEARCATII(M) << endl
       << "String message converter back from BEARTCATII Code: "
       << fromBEARCATII(toBEARCATII(M)) << endl
       << "Cipher code (C): " << C << endl
       << "Plaintext in BEARCATII Code: " << P << endl
       << "String plaintext from the BEARCATII Code: " << fromBEARCATII(P)
       << endl;
};

int main() {
  // driver function
  RSAinit();
  printResults();
  return -1;
}