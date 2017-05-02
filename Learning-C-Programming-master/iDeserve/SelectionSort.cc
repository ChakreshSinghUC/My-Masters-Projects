#include <iostream>

using namespace std;
int main() {
  cout << "Selection sort:\n";
  int Ar[] = {12, 35, 87, 26, 9, 28, 7};
  int sizeAr = sizeof(Ar) / sizeof(Ar[0]);
  int temp;
  for (int i = 0; i < sizeAr - 1; i++) {
    for (int j = i + 1; j < sizeAr; j++) {
      if (Ar[i] > Ar[j]) {
        temp = Ar[i];
        Ar[i] = Ar[j];
        Ar[j] = temp;
      }
    }
  }
  cout << "{";
  for (int i = 0; i < sizeAr; i++) {
    cout << Ar[i];
    (i == sizeAr - 1) ? cout << "" : cout << ", ";
  }
  cout << "}";

  return -1;
}