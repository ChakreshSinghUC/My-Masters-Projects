#include <iostream>
using namespace std;
int findIndexOfSmallest(int i, int BST[], int size)
{
    int min = 10000;
    int p;
    for (int j = i; j < size; j++)
    {
        if (min > BST[j])
        {
            min = BST[j];
            p = j;
        }
    }
    return p;
}
int main()
{
    int BST[] = {100, 50, 25, 15, 20, 30, 60, 55, 200, 150, 250};
    int size = sizeof(BST) / sizeof(BST[0]);
    int minIndex;
    for (int i = 1; i < size - 1; i++)
    {
        minIndex = findIndexOfSmallest(i, BST, size);
        if (minIndex == i && BST[i + 1] > BST[i - 1])
            cout << BST[i] << " ";
    }
    return -1;
}