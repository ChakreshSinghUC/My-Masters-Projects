#include <iostream>
using namespace std;
int main()
{
    int arr[] = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13};
    int N = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    int p_max, c_max;
    c_max = -1;

    for (int i = 0; i < k; i++)
    {
        if (c_max < arr[i])
            c_max = arr[i];
    }

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        count++;
        if (count <= k)
        {
            if (c_max < arr[i])
                c_max = arr[i];
        }
        else
            count = 0;
        if (i > k - 2)
            cout << c_max << " ";
    }
    return -1;
}