/*Given an array of integers, return indices of the two numbers such that they
add up to a specific target.

You may assume that each input would have exactly one solution, and you may not
use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> s;
    int p;
    for (auto i = 0; i < nums.size() - 1; i++) {
      p = target - nums[i];
      for (auto j = i + 1; j < nums.size(); j++) {
        if (p == nums[j]) {
          s.push_back(i);
          s.push_back(j);
        }
      }
    }
    return s;
  }
};
int main() {
  Solution obj;
  vector<int> nums;
  nums.push_back(2);
  nums.push_back(7);
  nums.push_back(11);
  nums.push_back(15);

  int target = 9;
  vector<int> v = obj.twoSum(nums, target);

  cout << "[";
  for (auto i = 0; i < v.size(); i++)
    cout << v[i] << ", ";
  cout << "]" << endl;
  return -1;
}