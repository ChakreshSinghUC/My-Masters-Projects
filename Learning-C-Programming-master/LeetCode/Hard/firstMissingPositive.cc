#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
#define ARRAY_SIZE(a) sizeof(a) / sizeof(a[0])
using namespace std;
int firstMissingPositive(vector<int> &nums) {

  set<int> s;
  if (nums.size() == 0)
    return 1;
  vector<int>::iterator itr;
  int max;
  int min;
  int sum = 0;
  int expected_sum = 0;
  int index = 1;

  for (itr = nums.begin(); itr != nums.end(); itr++) {
    if (*itr > 0) {
      s.insert(*itr);
    }
  }
  set<int>::iterator itr_set;
  for (itr_set = s.begin(); itr_set != s.end(); itr_set++) {
    if (*itr_set == index)
      index++;
    else
      return index;
  }
  if (!s.empty())
    return (*s.rbegin() + 1);
  else
    return 1;
}
int main() {
  int A[] = {-1, -2}; // 4, 3, 7, 6, 0, -1, 2, 1};
  int size = ARRAY_SIZE(A);
  vector<int> nums(A, A + size);
  cout << firstMissingPositive(nums);
}