#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    cout << bitset<10>(5 << 6 | 3);
}