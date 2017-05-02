#include <cstdlib>
#include <iostream>
using namespace std;
int randPrime() {
  int p;
  int stock[] = {19,  23,  29,  31,  37,  41,  43,  47,  53,  59,  61,
                 67,  71,  73,  79,  83,  89,  97,  101, 103, 107, 109,
                 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173,
                 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233,
                 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293,
                 307, 311, 313, 317, 331, 337, 347, 349};
  int size = sizeof(stock) / sizeof(stock[0]);
  int randomPrimeIndex = rand() % size;

  p = stock[randomPrimeIndex];
  return p;
}
int main() {
  for (int i = 0; i < 2; i++)
    cout << randPrime() << endl;
  return -1;
}