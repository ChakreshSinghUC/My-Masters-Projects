#include <iostream>
using namespace std;

int main()
{
    int Ar[] = {1, 2, 3, 4, 5, 6, 7, 8, 0, 36};
    int size = (sizeof(Ar) / sizeof(Ar[0]));
    int sum = 0;
    for (int i = 0; i < size; i++)
    {

        Ar[i] = sum + Ar[i];
        sum = Ar[i];
    }
    sum = sum / 2;
    for (int i = 0; i < size; i++)
    {
        if (Ar[i] == sum)
            cout << i << endl;
    }

    return -1;
}