/*
https://leetcode.com/problems/3sum/#/description
*/
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
vector<vector<int>> threeSum(vector<int> nums)
{
  vector<vector<int>> vec;
  if (nums.size() < 3)
    return {};
  int l, r;
  int sum = 0;
  sort(nums.begin(), nums.end());
  for (int i = 0; i < nums.size() - 2; i++)
  {

    l = i + 1;
    r = nums.size() - 1;
    while (l < r)
    {
      if (nums[i] + nums[l] + nums[r] == sum)
      {
        vector<int> temp;
        temp.push_back(nums[i]);
        temp.push_back(nums[l]);
        temp.push_back(nums[r]);
        sort(temp.begin(), temp.end());
        if (find(vec.begin(), vec.end(), temp) == vec.end())
          vec.push_back(temp);
        l++;
      }
      else if (nums[i] + nums[l] + nums[r] < sum)
        l++;
      else
        r--;
    }
  }
  return vec;
}

int main()
{
  vector<int> nums;
  nums.push_back(-1);
  nums.push_back(0);
  nums.push_back(1);
  nums.push_back(2);
  nums.push_back(-1);
  nums.push_back(-4);

  vector<vector<int>> vec;

  vec = threeSum(nums);
  for (int i = 0; i < vec.size(); i++)
  {
    for (int j = 0; j < vec[i].size(); j++)
      cout << vec[i][j] << ", ";
    cout << endl;
  }
}
