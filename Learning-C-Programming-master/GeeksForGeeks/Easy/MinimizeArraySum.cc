/*
Given two arrays, A and B, of equal size n, the task is to find the minimum value of A[0] * B[0] + A[1] * B[1] +…+ A[n-1] * B[n-1]. 
Shuffling of elements of arrays A and B is allowed.
*/
#include <iostream>
#include <algorithm>
using namespace std;
int minSumFunct(int A[], int B[], int n)
{
    int minSum = 0;
    sort(A, A + n);
    sort(B, B + n);

    for (int i = 0; i < n; i++)
        minSum += A[i] * B[n - 1 - i];
    return minSum;
}
int main()
{
    int A[] = {3, 1, 1};
    int B[] = {6, 5, 4};
    int na = sizeof(A) / sizeof(A[0]);
    int nb = sizeof(B) / sizeof(B[0]);
    cout << "Minimum sum of products of two arrays is: " << minSumFunct(A, B, na);
    return -1;
}