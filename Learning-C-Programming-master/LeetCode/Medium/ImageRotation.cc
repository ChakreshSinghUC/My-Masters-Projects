/*You are given an n x n 2D matrix representing an image.

Rotate the image by 90 degrees (clockwise).

Follow up:
Could you do this in-place?*/
//@Author: Chakresh Singh
//@Date: 25-Mar-2017
#include <iostream>
#include <vector>
using namespace std;
// void rotate(vector<vector<int>> &matrix)
// {

//     int size = 4;
//     //matrix.size();

//     for (int i = 0; i < size; i++)
//     {
//         for (int j = size - 1; j >= 0; j--)
//             cout << matrix[j][i] << " ";
//         cout << endl;
//     }
// }
int main()
{
    int A[4][4] = {{1, 1, 1, 1}, {2, 2, 2, 2}, {3, 3, 3, 3}, {4, 4, 4, 4}};
    int size = 4;
    vector<vector<int>> matrix; //(A, A + size);
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            matrix(i, j) = A[i][j];
    // cout << matrix.size();
    //rotate(matrix);
}
