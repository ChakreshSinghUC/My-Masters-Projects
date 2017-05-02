/*Given an array of integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2.
Input:
The first line contains 'T' denoting the number of testcases. Then follows description of testcases.
Each case begins with a single positive integer N denoting the size of array.
The second line contains the N space separated positive integers denoting the elements of array A.
Output:
For each testcase, print "Yes" or  "No" whtether it is Pythagorean Triplet or not.
Constraints:
1<=T<=50
 1<=N<=100
 1<=A[i]<=100
Example:
Input:
1
5
3 2 4 6 5
Output:
Yes*/
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int t; //Number of test cases
    int A[] = {4, 49, 1, 59, 19, 81, 97, 99, 82, 90, 99, 10, 58, 73, 23};
    int N = sizeof(A) / sizeof(A[0]); //Size of array
    int sum;
    bool flag = false;
    map<int, int> m;
    // store the array in a hashmap..
    for (int i = 0; i < N; i++)
        m.insert(make_pair((A[i] * A[i]), i));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            sum = (A[i] * A[i]) + (A[j] * A[j]);
            if (m.find(sum) != m.end())
                flag = true;
        }
    }
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return -1;
}