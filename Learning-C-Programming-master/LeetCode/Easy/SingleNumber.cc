/*Given an array of integers, every element appears twice except for one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory? */
#include <iostream>
#include <vector>
#include <set>
#include <limits.h>
using namespace std;
int singleNumber(vector<int> &nums)
{
    if (nums.empty())
        return -1;
    int sum1 = 0;
    for (int i : nums)
    {
        sum1 += i;
    }
    set<int> s(nums.begin(), nums.end());
    nums.assign(s.begin(), s.end());
    int sum2 = 0;
    for (int i : s)
    {
        sum2 += i;
    }
    int diff = (2 * sum2) - sum1;
    return diff;
}
int main()
{

    int A[] = {12, 16, 10, 11, 13, 12, 13, 16, 11};
    int size = sizeof(A) / sizeof(A[0]);
    vector<int> nums(A, A + size);
    cout << singleNumber(nums);
}