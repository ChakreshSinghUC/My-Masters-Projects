/*Given n non-negative integers a1, a2, ..., an, where each represents a point
 * at coordinate (i, ai). n vertical lines are drawn such that the two endpoints
 * of line i is at (i, ai) and (i, 0). Find two lines, which together with
 * x-axis forms a container, such that the container contains the most water.*/
#include <iostream>
using namespace std;
int bad_mostwatercontainer(int A[], int size) {
  int height = 0;
  int area[size][size];
  for (int i = 0; i < size - 1; i++)
    for (int j = i + 1; j < size; j++) {
      area[i][j] = (j - i) * min(A[i], A[j]);
    }
  int maxarea = 0;
  for (int i = 0; i < size - 1; i++)
    for (int j = i + 1; j < size; j++)
      maxarea = (maxarea < area[i][j] ? area[i][j] : maxarea);

  return maxarea;
}
int good_mostwatercontainer(int A[], int size) {
  int l = 0;
  int r = size - 1;
  int maxArea = 0;
  int area;
  while (l < r) {
    area = min(A[l], A[r]) * (r - l);
    maxArea = max(maxArea, area);
    if (A[l] > A[r])
      r--;
    else
      l++;
  }

  return maxArea;
}
int main() {
  int A[] = {28,  342, 418, 485, 719, 670, 878, 752,
             662, 994, 654, 504, 929, 660, 424, 855};
  int size = sizeof(A) / sizeof(A[0]);
  // cout<<size;
  cout << good_mostwatercontainer(A, size);
  return -1;
}
