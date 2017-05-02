// http://www.geeksforgeeks.org/find-a-triplet-that-sum-to-a-given-value/
/*Given an array S of n integers, are there elements a, b, c in S such that a +
b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Note: The solution set must not contain duplicate triplets.

For example, given array S = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]*/
//@Date: 11/Mar/2017
//@Author: Chakresh Singh

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> tripleSum(vector<int> &nums) {
  int size = nums.size();
  int sum = 0;
  vector<vector<int>> vec(size, vector<int>(3));
  vec.erase(vec.begin(), vec.end());
  sort(nums.begin(), nums.end());
  int l, r;

  for (auto i = 0; i < size - 2; i++) {
    l = i + 1;
    r = size - 1;
    while (l < r) {
      vector<int> t(3, 0);
      if (sum > nums[i] + nums[l] + nums[r])
        l++;
      else if (sum < nums[i] + nums[l] + nums[r])
        r--;
      else if (sum == nums[i] + nums[l] + nums[r]) {
        //  cout << nums[i] << nums[l] << nums[r] << endl;
        t[0] = nums[i];
        t[1] = nums[l];
        t[2] = nums[r];
        cout << i << "\t" << vec[i][0] << "\t **" << i << " "
             << "\t **" << l << "\t**" << r << endl;
        vec.push_back(t);
        l++;
        r--;
      }
    }
  }
  vec.erase(unique(vec.begin(), vec.end()), vec.end());
  return vec;
}
int main() {
  int tmp[] = {10, 20, 30, -30, 10, -20, 35, 5, -15, 50};
  int s = sizeof(tmp) / sizeof(tmp[0]);
  vector<int> A(tmp, tmp + s);
  int sum = 0;

  int size = sizeof(A) / sizeof(A[0]);

  vector<vector<int>> v = tripleSum(A);
  for (auto i = 0; i < v.size(); i++) {

    for (auto j = 0; j < v[i].size(); j++) {
      cout << "[" << i << "," << j << "]:" << v[i][j] << ", ";
    }
    cout << endl;
  }
  return -1;
}