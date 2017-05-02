/**
Delete dupplicate elemets from an array.
*/
#include <iostream>
#include <algorithm>

using namespace std;
void delArrayElement(int A[], int &n, int j)
{
    for (int i = j; i < n - 1; i++)
        A[i] = A[i + 1];
    n--;
}
int main()
{
    int A[] = {1, 2, 2, 3, 3, 3, 0, 3, 9, 10, 2, 4, 0};
    int n = sizeof(A) / sizeof(A[0]);
    sort(A, A + n);
    cout << endl;
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] == A[i + 1])
        {
            delArrayElement(A, n, i);
            i--;
        }
    }
    cout << "n = " << n << endl;
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    return -1;
}