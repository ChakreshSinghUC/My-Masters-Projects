#include <iostream>
#include <limits.h>
using namespace std;
int reversex(int x)
{
    long long res = 0;
    while (x)
    {
        res = (x % 10) + res * 10;
        x /= 10;
    }

    return (res < INT_MIN || res > INT_MAX) ? 0 : res;
}

int main()
{
    int x = -1534239;

    cout << reversex(x) << endl;
    return -1;
}