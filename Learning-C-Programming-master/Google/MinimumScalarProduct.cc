/*Problem

You are given two vectors v1=(x1,x2,...,xn) and v2=(y1,y2,...,yn). The scalar
product of these vectors is a single number, calculated as x1y1+x2y2+...+xnyn.

Suppose you are allowed to permute the coordinates of each vector as you wish.
Choose two permutations such that the scalar product of your two new vectors is
the smallest possible, and output that minimum scalar product.

Input

The first line of the input file contains integer number T - the number of test
cases. For each test case, the first line contains integer number n. The next
two lines contain n integers each, giving the coordinates of v1 and v2
respectively.
Output

For each test case, output a line

*/
// @Author: Chakresh Singh
// @Date: 13-Mar-2017

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int scalarProduct(vector<int> vec_1, vector<int> vec_2) {
  int product = 0;
  for (auto i = 0; i < vec_1.size(); i++) {
    product += vec_1[i] * vec_2[i];
  }
  return product;
}

int main() {
  vector<int> vec_1{1, 3, -5};
  vector<int> vec_2{-2, 4, 1};
  sort(vec_1.begin(), vec_1.end());
  sort(vec_2.begin(), vec_2.end());

  cout << scalarProduct(vec_1, vec_2);
  return -1;
}