/* Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

For example,
Given nums = [0, 1, 3] return 2.

Note:
Your algorithm should run in linear runtime complexity. Could you implement it using only constant extra space complexity? */
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int missingNumber(vector<int> &nums)
{
    int sum = 0;
    int expected = 0;
    int max = -1;
    int min = INT_MAX;
    for (int i = 0; i < nums.size(); i++)
    {
        if (min > nums[i])
            min = nums[i];
        if (max < nums[i])
            max = nums[i];

        sum += nums[i];
    }
    if (min != 0)
        return 0;

    expected = max * (max + 1) / 2;
    if (expected != sum)
        return (expected - sum);
    else
        return max + 1;
}
int main()
{
    int A[] = {0, 1, 3, 2, 5, 6};
    int size = sizeof(A) / sizeof(A[0]);
    vector<int> nums(A, A + size);
    cout << missingNumber(nums) << endl;
}