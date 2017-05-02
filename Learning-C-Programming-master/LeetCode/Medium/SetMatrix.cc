// Given a m x n matrix, if an element is 0, set its entire row and column to 0. Do it in place.
#include <iostream>
#include <vector>
using namespace std;
void setZeroes(vector<vector<int>> &matrix)
{
    vector<vector<int>>::iterator row;
    vector<int>::iterator col;
    //for (row = matrix.begin(); row != matrix.end(); row++)
    for (int i = 0; i < matrix.size(); i++)

    {
        for (int j = 0; j < matrix[i].size(); j++) //  for (col = row->begin(); col != row->end(); col++)
        {
            cout << matrix[i][j] << endl;
            // do stuff ...
        }
    }
}
int main()
{
    vector<vector<int>> matrix = {{1, 0, 2, 3},
                                  {2, 5, 3, 4},
                                  {1, 2, 0, 3}};
    setZeroes(matrix);
}