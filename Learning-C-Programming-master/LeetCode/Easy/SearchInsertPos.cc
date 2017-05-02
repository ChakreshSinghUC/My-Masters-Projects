/*Given a sorted array and a target value, return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

Here are few examples.
[1,3,5,6], 5 → 2
[1,3,5,6], 2 → 1
[1,3,5,6], 7 → 4
[1,3,5,6], 0 → 0*/
#include <iostream>
#include <vector>
using namespace std;
int searchInsert(vector<int> &nums, int target)
{
    int j = 0;
    for (int i : nums)
    {
        if (i >= target)
            return j;
        else
            j++;
    }
    return j;
}
int main()
{
    int A[] = {};
    int size = sizeof(A) / sizeof(A[0]);
    vector<int> nums(A, A + size);
    cout << searchInsert(nums, 2);
}