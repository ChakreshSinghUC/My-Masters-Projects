#include <iostream>
#include <algorithm>
//this program can be improved the equality does not need to be checked separately.
using namespace std;
bool BinarySearch(int A[], int low, int high, int n, int size)
{
    bool flag = false;
    int mid;
    if (low < high)
    {
        mid = low + (size / 2);
        if (A[mid] < n)
        {
            BinarySearch(A, mid + 1, high, n, high - mid);
        }
        else if (A[mid] > n)
        {

            BinarySearch(A, low, mid - 1, n, mid - low);
        }
        else if (A[mid] == n)
        {
            flag = true;
            return flag;
        }
    }
    return flag;
}
int main()
{
    int A[] = {2, 4, 1, 8, 6, 0, 1};

    int size = sizeof(A) / sizeof(A[0]);
    sort(A, A + size);
    if (BinarySearch(A, 0, size, 10, size))
        cout << "\nFound!!!";
    else
        cout << "\nNot found!!!";
    return -1;
}