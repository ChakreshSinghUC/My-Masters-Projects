/* Given a collection of distinct numbers, return all possible permutations.

For example,
[1,2,3] have the following permutations:

[
  [1,2,3],
  [1,3,2],
  [2,1,3],
  [2,3,1],
  [3,1,2],
  [3,2,1]
]
*/

#include <iostream>
#include <algorithm>
#define size(A) sizeof(A) / sizeof(A[0]);
using namespace std;
int main()
{
    int A[] = {12, 3, 4};
    int s = size(A);
    sort(A, A + s);

    do
    {
        for (int i = 0; i < s; i++)
            cout << A[i];

        cout << endl;
    } while (next_permutation(A, A + s));
}
