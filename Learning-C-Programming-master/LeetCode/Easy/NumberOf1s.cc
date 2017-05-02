#include <iostream>
#include <bitset>
#include <stdint.h>
using namespace std;
// /Brian Kernighan’s Algorithm
int countOnes(uint32_t n)
{
    unsigned int count = 0;
    while (n)
    {
        n &= (n - 1);
        count++;
    }
    return count;
}

int main()
{
    uint32_t n = 11;
    cout << __builtin_popcount(n) << endl;
    cout << countOnes(n) << endl;
}