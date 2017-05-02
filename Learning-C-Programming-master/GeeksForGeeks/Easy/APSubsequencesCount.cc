/*
http://www.practice.geeksforgeeks.org/problem-page.php?pid=1648
@Date: 11/Feb/2017
*/
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int countAPSubsequence(int A[], int size, int p)
{
    int c = 0;
    int i = p;
    int gap;
    map<int, int> m;
    while (i < size)
    { //store the array in a hashmap
        m.insert(make_pair(A[i], i));
        i++;
    }
    int k = 1;
    int dummy = 0;
    i = 0;
    while (k < size)
    {
        gap = A[k + i] - A[i];
        cout << "\nGap: " << gap << "\nA[" << i << "]:\t" << A[i] << endl;

        while (m.find((A[i] + gap)) != m.end())
        {
            dummy++;
            i = m.find((A[i] + gap))->second;
            cout << "A[" << i << "]: "
                 << "\t" << m.find(A[i])->first << endl;
        }
        cout << "Dummy: " << dummy << endl;
        c = c + dummy;
        dummy = 0;
        i = 0;

        k++;
    }
    return c;
}
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A) / sizeof(A[0]);

    int count = 0;
    if (size != 0)
        count = (size + 1);
    sort(A, A + size);
    for (int i = 0; i < size; i++)
        count = count + countAPSubsequence(A, size, i);
    cout << "\nCount: "
         << count;
    return -1;
}