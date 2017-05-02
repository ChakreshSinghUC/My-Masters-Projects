//pairsInMatrix.cpp

// C++ program to find pairs with given sum such
// the two elements of pairs are from different rows
#include <bits/stdc++.h>
using namespace std;
 
const int MAX = 100;
 
// Function to find pair for given sum in matrix
// mat[][] --> given matrix
// n --> order of matrix
// sum --> given sum for which we need to find pair
void pairSum(int mat[][MAX], int n, int sum)
{
    // Create a hash and store all elements of matrix
    // as keys, and row and column numbers as values
    unordered_map<int, pair<int, int> > hm;
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            hm[mat[i][j]] = make_pair(i, j);
 
    // Traverse the matrix again to check for every
    // element whether its pair exists or not.
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            // Look for remaining sum in hash
            int remSum = sum - mat[i][j];
            auto it = hm.find(remSum); // it is an iterator
                                       // of unordered_map type
 
            // If an element with value equal to remaining sum exists
            if (it != hm.end())
            {
                // Find row and column numbers of element with
                // value equal to remaining sum.
                pair<int, int> p = it->second;
                int row = p.first, col = p.second;
 
                // If row number of pair is not same as current
                // row, then print it as part of result.
                // Second condition is there to make sure that a 
                // pair is printed only once.  
                if (row != i && row > i)
                   cout << "(" << mat[i][j] << ", "
                        << mat[row][col] << "), ";
            }
        }
    }
}
 
// Driver program 
int main()
{
    int n = 4, sum = 11;
    int mat[][MAX]= {{1, 3, 2, 4},
                     {5, 8, 7, 6},
                     {9, 10, 13, 11},
                     {12, 0, 14, 15}};
    pairSum(mat, n, sum);
    cout<<endl;
    return 0;
}