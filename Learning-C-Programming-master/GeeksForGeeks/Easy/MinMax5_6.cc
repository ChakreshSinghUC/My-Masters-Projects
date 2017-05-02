/**
Given a no N you can perform an operation in it in which you can change a digit
5 to 6 and vice versa.
Now your task is to print the sum of the max no and the min no obtained by
performing such operations.

*/

#include <iostream>
using namespace std;
int max_min_SUM(int num) {
  //   int sum = 0;
  int mul1 = 1;
  int mul2 = 1;
  int max = 0;
  int min = 0;
  int temp1 = num;
  int temp2 = num;
  
  while (temp1 != 0) {
    if (temp1 % 10 == 5) {
      max = mul1 * 6 + max;
      mul1 = mul1 * 10;
    } else {
      max = (mul1 * (temp1 % 10)) + max;
      mul1= mul1*10;
    }
    temp1 = temp1 / 10;
  }
  

  while (temp2 != 0) {
    if (temp2 % 10 == 6) {
      min = mul2 * 5 + min;
      mul2 = mul2 * 10;
    } 
    else {
         
      min = (mul2 * (temp2 % 10)) + min;
      mul2 = mul2*10;
     
    }
    temp2 = temp2 / 10;
  }


return (max + min);
}
int main() {
  int num = 3506;

  cout << "Man+min: " << max_min_SUM(num);
  return -1;
}