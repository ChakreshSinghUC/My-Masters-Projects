// https://leetcode.com/problems/single-number-ii/#/description
//  Given an array of integers, every element appears three times except for one, which appears exactly once. Find that single one.

// Note:
// Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int singleNumber(vector<int> &nums)
{
    if (nums.empty())
        return -1;
    long int sum1 = 0;
    for (int i : nums)
    {
        sum1 += i;
    }
    set<int> s(nums.begin(), nums.end());
    nums.assign(s.begin(), s.end());
    long int sum2 = 0;
    for (int i : s)
    {
        sum2 += i;
    }
    long int diff = (3 * sum2) - sum1;
    return diff / 2;
}
int main()
{
    int A[] = {43,
               16,
               45,
               89,
               45,
               -2147483648,
               45,
               2147483646,
               -2147483647,
               -2147483648,
               43,
               2147483647,
               -2147483646,
               -2147483648,
               89,
               -2147483646,
               89,
               -2147483646,
               -2147483647,
               2147483646,
               -2147483647,
               16,
               16,
               2147483646,
               43};
    int size = sizeof(A) / sizeof(A[0]);
    vector<int> nums(A, A + size);
    cout << singleNumber(nums) << endl;
}