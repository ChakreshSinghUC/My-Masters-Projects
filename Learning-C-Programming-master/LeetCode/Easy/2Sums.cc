#include <iostream>
#include <algorithm>
using namespace std;
void two_sums(int A[], int size, int sum)
{

    int l = 0;
    int r = size - 1;
    int s;
    sort(A, A + size);
    while (l < r)
    {
        s = A[l] + A[r];
        if (sum < s)
            r--;
        if (sum > s)
            l++;
        if (sum == s)
        {
            cout << A[l] << "+" << A[r] << endl;
            l++;
            r--;
            //removing duplate results
            while (A[l] == A[l + 1] && l < r)
                l++;
            while (A[r] == A[r - 1] && l < r)
                r--;
        }
    }
}
int main()
{
    int A[] = {4, 3, 0, -9, 18, 5, -4, 2, 2, 0, 8, 6, 4, 17, 8};
    int size = sizeof(A) / sizeof(A[0]);
    int sum = 8;
    cout << sum << ": " << endl;
    two_sums(A, size, sum);
}