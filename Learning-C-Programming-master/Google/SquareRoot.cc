#include <iostream>
#include <math.h>
using namespace std;
int nearestSquare(int a) {
  int res;
  for (int i = a / 2; i > 0; i++) {
    if ((a == (i * i)) || a > i * i) {
      res = i;
      break;
    }
  }
  return res;
}
int squareRoot(int a) {
  int srt = 0;
  int number_of_digits = 0;
  int temp = a;
  int num;
  do {
    ++number_of_digits;
    temp /= 10;
  } while (temp);

  int d;
  temp = a;
  if (number_of_digits % 2 == 0) {
    d = 10;
    do {
      num = temp / 10;
      temp = num;
    } while (num / 10 != 0);
  }

  d = 100;
  temp = a - num * (number_of_digits - 1);
  num = temp;
  
  do {
    num /= d;
    temp %= d;
    cout << nearestSquare(num) << endl;
  } while (temp / d != 0);
  return srt;
}

int main() {
  int a = 542342;
  cout << squareRoot(a) << endl;
  return -1;
}