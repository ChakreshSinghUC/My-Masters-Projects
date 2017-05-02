/* Given an array nums containing n + 1 integers where each integer is between 1 and n (inclusive), 
prove that at least one duplicate number must exist. Assume that there is only one duplicate number, 
find the duplicate one.

Note:

    You must not modify the array (assume the array is read only).
    You must use only constant, O(1) extra space.
    Your runtime complexity should be less than O(n^2).
    There is only one duplicate number in the array, but it could be repeated more than once.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findDuplicate(vector<int> &nums)
{
    int size = nums.size();
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
            if (nums[i] == nums[j])
                return nums[i];
    }
    return -1;
}
int main()
{
    int A[] = {3, 2, 6, 7, 9, 1, 2, 4, 8, 5};
    int s = sizeof(A) / sizeof(A[0]);
    vector<int> nums(A, A + s);
    cout << findDuplicate(nums);
}