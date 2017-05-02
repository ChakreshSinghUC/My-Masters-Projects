/** 
http://www.practice.geeksforgeeks.org/problem-page.php?pid=1529

*/

#include <iostream>
using namespace std;
int Arr[] = {1, 2, 3, 4, 5, 6};
int ArrSize = sizeof(Arr) / sizeof(Arr[0]);

void rotateArr()
{
    //Clockwise rotation of the array
    int temp = Arr[ArrSize - 1];
    for (int i = ArrSize - 1; i >= 1; i--)
        Arr[i] = Arr[i - 1];

    Arr[0] = temp;
}
void delArrItem(int a)
{
    for (int j = a; j < ArrSize; j++)
        Arr[j] = Arr[j + 1];
    ArrSize--;
}
int RotDelArrFunct()
{
    int itr = 1;

    while (ArrSize > 1)
    {

        rotateArr();

        if (itr < ArrSize)
        {
            delArrItem(ArrSize - itr);
            itr++;
        }
        else if (itr >= ArrSize && ArrSize > 1)
        {
            delArrItem(0);
            ++itr;
        }
    }

    return Arr[0];
}
int main()
{
    int output;
    int t; //number of test cases
    cin >> t;
    
    while (t--)
    {
        if (ArrSize != 0)
        {
            output = RotDelArrFunct();
            cout << output;
        }
    }
    return 0;
}
