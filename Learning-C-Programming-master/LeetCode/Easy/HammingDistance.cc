#include <iostream>
#include <bitset>
using namespace std;

int hammingDistance(int a, int b)
{

    return __builtin_popcount(a ^ b);
}
int main()
{
    cout << hammingDistance(1, 4);
}