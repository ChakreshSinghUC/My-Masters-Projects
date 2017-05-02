#include <iostream>
using namespace std;
int findL(int A[], int r)
{
    int L;
    int i = r + 1;
    while (A[r] > A[i])
    {
        i++;
    }
    L = i - 1;
    return L;
}
void postorder(int A[], int N, int r, int L, int parent)
{
    while (r < N)
    {
        if (r != L)
        {
            parent = r;
            r = r + 1;
            L = findL(A, L);
            postorder(A, N, r, L, parent);
        }
        else
        {
            parent = r;
            r = r + 1;
            postorder(A, N, r, N, parent);
        }
    }
}
int main()
{
    int A[] = {100, 50, 30, 20, 25, 28, 60};
    int N = sizeof(A) / sizeof(A[0]);
    int L;
    int r = 0;
    int parent = 0;
    L = findL(A, r);
    postorder(A, N, r, L, parent);

    return -1;
}