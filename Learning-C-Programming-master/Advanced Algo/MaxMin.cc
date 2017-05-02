//Finding the Maximum and Minimum element in an array
#include <iostream>
using namespace std;

int main()
{
    int Ar[] = {4, 3, 7, 1, 2, 3, 8, 9, 0};
    int size = sizeof(Ar) / sizeof(Ar[0]);
    int min = Ar[0];
    int index = 0;
    for (int i = 1; i < size; i++)
    {

        if (Ar[i] < min)
        {
            min = Ar[i];
            index = i;
        }
    }

    cout << "Minimum element is: Ar[" << index << "] = " << Ar[index] << endl;
    int max = Ar[0];
    index = 0;
    for (int i = 1; i < size; i++)
    {

        if (Ar[i] > min)
        {
            min = Ar[i];
            index = i;
        }
    }
    cout << "Maximum element is: Ar[" << index << "] = " << Ar[index] << endl;
    return -1;
}