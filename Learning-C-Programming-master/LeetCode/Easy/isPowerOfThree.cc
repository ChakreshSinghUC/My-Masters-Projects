#include <iostream>
#include <bitset>
#include <math.h>
using namespace std;

bool isPowerOfThree(int n)
{
    return fmod(log10(n) / log10(3), 1) == 0;
}
int main()
{
    cout << isPowerOfThree(29);
}