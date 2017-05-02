//http://www.practice.geeksforgeeks.org/problem-page.php?pid=1682
/*Given a sorted array with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in the given array.*/
#include <iostream>

using namespace std;

int main()

{
    int t;
    bool flag;
    cin >> t;
    int A[10000];
    int N;

    int a;
    int L, R;
    while (t--)
    {
        flag = false;
        cin >> N;
        for (int i = 0; i < N; i++)
            cin >> A[i];
        cin >> a;

        for (int i = 0; i < N; i++)
        {
            if (a == A[i])
                flag = true;
        }
        if (flag)
        {
            for (int i = 0; i < N; i++)
            {
                if (A[i] == a)
                    R = i;
            }
            for (int i = N - 1; i >= 0; i--)
            {
                if (A[i] == a)
                    L = i;
            }
            cout << L << " " << R << endl;
        }
        else
            cout << -1 << endl;
    }
    return -1;
}