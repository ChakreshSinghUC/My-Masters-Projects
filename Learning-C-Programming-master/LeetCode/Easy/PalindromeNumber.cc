#include <iostream>
#include <limits.h>
using namespace std;
bool isPalindrome(int x)
{
    long long a = x;
    long long res = 0;
    bool flag;
    while (x)
    {
        res = (x % 10) + res * 10;
        x /= 10;
    }
    if (res == a)
    {
        flag = true;
    }
    else
        flag = false;
    return (a < 0 || (a != 0 && a % 10 == 0)) ? false : flag;
}
int main()
{
    int x = 123;
    cout << isPalindrome(x);
    return -1;
}