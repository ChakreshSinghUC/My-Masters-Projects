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
    int BST[1000];
    int size;
    int t;
    int minIndex;

    cin >> t;
    while (t--)
    {
        cin >> size;
        for (int i = 0; i < size; i++)
            cin >> BST[i];

        if (size > 3)
        {
            for (int k = 1; k < size - 1; k++)
            {
                minIndex = findIndexOfSmallest(k, BST, size);
                if (minIndex == k && BST[k + 1] > BST[k - 1])
                    cout << BST[k] << " ";
            }

            cout << BST[size - 1];
        }
        else if (size < 3)
        {
            for (int k = 1; k < size; k++)
                cout << BST[k] << " ";
        }
        else if (size == 1)
            cout << BST[0];
    }
    cout << endl;
    return -1;
}