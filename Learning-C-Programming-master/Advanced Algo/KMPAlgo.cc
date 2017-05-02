// Patter P to be searched in Text string T.

#include <iostream>
int count = 0;
int lastIndex(int P[], int T[], int sizeP, int sizeT, int index) {

  int S = 0;
  int k = 0;
  for (int i = index; i < sizeT; i++) {
    while (P[k] == T[i] && k <= sizeP)
      k++;
  }


  return S;
}
int main() {
  int P[] = {0, 0, 0, 1, 0, 0, 2};
  int T[] = {0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0,
             3, 3, 0, 0, 0, 1, 0, 0, 2, 0, 0};
  int sizeP = sizeof(P) / sizeof(P[0]);
  int sizeT = sizeof(T) / sizeof(T[0]);
  int i = 0;

  i = lastIndex(P, T, sizeP, sizeT, i);

  return -1;
}
