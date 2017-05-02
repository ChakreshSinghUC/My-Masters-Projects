#include <iostream>
using namespace std;
int factorial(int n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}
int main() {
  int N;
  int factorialN;
  int count = 0;
  int t;
  cin >> t;
  while (t--) {
    cin >> N;
    factorialN = factorial(N);
    count = 0;
    for (int i = 1; i <= factorialN; i++)
      if (factorialN % i == 0)
        count++;
    cout << count << endl;
  }
  return -1;
}