#include <iostream>
#include <math.h>
#include <stack>
using namespace std;
/*void primeFactors(int N)
{
    while (N % 2 == 0)
    {
        cout << 2 << " ";
        N = N / 2;
    }

    if (N == 3)
        cout << 3 << " ";
    for (int i = 3; i <= sqrt(N); i += 2)
    {
        while (N % i == 0)
        {
            cout << i << " ";
            N = N / i;
        }
    }
}*/
void LargestPrimeFactor(int N)
{
    stack<int> s;
    while (N % 2 == 0)
    {
        s.push(2);
        N = N / 2;
    }

    for (int i = 3; i <= sqrt(N); i += 2)
    {
        while (N % i == 0)
        {
            s.push(i);
            N = N / i;
        }
    }
    if (N > 2)
        s.push(N);

    cout << s.top() << endl;
}
int main()
{
    int N;
    LargestPrimeFactor(15);

    return -1;
}