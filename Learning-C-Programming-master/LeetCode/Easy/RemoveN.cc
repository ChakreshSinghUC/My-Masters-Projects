#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int> &nums, int val) {
  nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
  return nums.size();
}
int main() {
  int A[] = {3, 2, 2, 3};
  int size = sizeof(A) / sizeof(A[0]);
  vector<int> nums(A, A + size);
  int val = 3;
  cout << removeElement(nums, val);
}