#include <iostream>
#include <math.h>
using namespace std;
double powers(double x, int p) {
  double r = 1;
  cout << p << "\t" << 0 - p << "\t" << abs(p) << endl;
  if (p < 0) {
    p = 0 - p;
    x = 1 / x;
  }
  while (p > 0) {
    if (p % 2 == 0) {
      x = x * x;
      p = p / 2;
    } else {
      r = r * x;
      p = p - 1;
    }
  }
  return r;
}
int main() {
  double x = 2.00000;
  long int p = -21474836481;
  cout << p << "\t" << 0 - p << "\t" << abs(p) << "\t" << -1 * p << endl;
  // cout << x << " raised to the power of " << p << "=" << powers(x, p);
  return 1;
}