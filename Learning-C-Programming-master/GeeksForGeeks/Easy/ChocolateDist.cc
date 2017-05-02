/**
@Date: Jan/16/2017
@Author: Chakresh Singh
------------------------------
Chocolate Distribution Problem
------------------------------
Given an array of n integers where each value represents number of chocolates in
a packet. Each packet can have variable number of chocolates. There are m
students, the task is to distribute chocolate packets such that :
1.    Each student gets one packet.
2.    The difference between the number of chocolates in packet with maximum
chocolates and packet with minimum chocolates given to the students is minimum.
*/
#include <algorithm>
#include <iostream>
using namespace std;
void distchoc(int Ar[], int size, int m) {
  int minDiff = 10000;
  int temp;
  int a;
  for (int i = 0; i < size - m + 1; i++) {
    temp = Ar[i + m - 1] - Ar[i];
    if (temp < minDiff) {
      minDiff = temp;
      a = i;
    }
  }
  for (int i = a; i < a + m; i++)
    cout << Ar[i] << ", ";
  cout << "\nMinimum difference: " << Ar[a + m - 1] - Ar[a] << endl;
}
int main() {
  int Ar[] = {12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50};
  int size = sizeof(Ar) / sizeof(Ar[0]);
  int m = 7;
  sort(Ar, Ar + size);
  distchoc(Ar, size, m);
  return -1;
}