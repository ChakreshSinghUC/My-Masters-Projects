//check if an integer is pallindrome or not..
#include <iostream>
using namespace std;
int main()
{
    int n = 352662503;
    int t = n;
    bool flag;
    int m[100];
    int i = 0;
    while (n != 0)
    {
        m[i] = n % 10;
        n /= 10;
        i++;
    }
    for (int k = 0; k < i / 2; k++)
    {
        if (m[k] == m[i - k - 1])
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
    }
    cout << t;
    flag ? cout << " is a pallindrome" : cout << " is NOT a pallindrome";
    return -1;
}