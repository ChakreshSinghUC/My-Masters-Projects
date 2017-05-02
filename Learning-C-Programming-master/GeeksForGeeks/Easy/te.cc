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
    int BST[] = {61, 8, 48, 767, 675, 465, 323, 95, 91, 212, 156, 201, 210, 240, 265, 261, 270, 401, 393, 388, 425, 558, 556, 502, 478, 598, 563, 587, 646, 621, 754, 689, 686, 696, 713, 702, 757, 993, 967, 870, 837, 829, 925, 920, 999};
    int size;

    size = sizeof(BST) / sizeof(BST[0]);
    int minIndex;
    int LeftSubTree[100];
    minIndex = findIndexOfSmallest(0, BST, size);
    for (int i = 0; i <= minIndex; i++)
        LeftSubTree[i] = BST[i];

    if (size > 3)
    {
        for (int k = 1; k < size - 1; k++)
        {
            minIndex = findIndexOfSmallest(k, BST, size);
            if (k - 2 >= 0 && BST[k] < BST[k - 1] && minIndex == k)
            {
                if (BST[k + 1] > BST[k - 1])
                    cout << BST[k] << "* ";
            }
            else if (k - 2 >= 0 && BST[k] > BST[k - 1] && minIndex == k)
            {
                if (BST[k + 1] > BST[k - 2])
                    cout << BST[k] << "# ";
            }
        }

        cout << BST[size - 1];
    }
    else if (size == 3 || size == 2)
    {
        for (int k = 1; k < size; k++)
            cout << BST[k] << " ";
    }
    else if (size == 1)
        cout << BST[0];

    cout << endl;

    return -1;
}

//48 91 210 240 261 270 388 425 478 587 621 686 696 702 757 829 920 999
//48 91 210 261 270 388 425 478 587 621 686 702 757 829 920 999