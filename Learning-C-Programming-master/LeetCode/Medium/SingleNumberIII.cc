//https://leetcode.com/problems/single-number-iii/#/description

/* Given an array of numbers nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once.

For example:

Given nums = [1, 2, 1, 3, 2, 5], return [3, 5].

Note:

    The order of the result is not important. So in the above example, [5, 3] is also correct.
    Your algorithm should run in linear runtime complexity. Could you implement it using only constant space complexity?
*/
#include <iostream>
#include <vector>
#include <limits.h>
#include <map>
using namespace std;
vector<int> singleNumber(vector<int> &nums)
{
    vector<int> vec;
    if (nums.empty())
        return vec;

    map<int, int> m;

    for (int i : nums)
    {
        m[i]++;
    }

    map<int, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        if (it->second == 1)
            vec.push_back(it->first);
    }

    return vec;
}
int main()
{

    int A[] = {12, 16, 10, 11, 12, 13, 16, 11};
    int size = sizeof(A) / sizeof(A[0]);
    vector<int> nums(A, A + size);
    vector<int> v = singleNumber(nums);
    for (int i : v)
        cout << i << endl;
}