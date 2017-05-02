//arrange the digits of a number in ascending order

#include <iostream>

using namespace std;

int main()
{
    int rem, tx;
    int x = 338197013;
    for (int l = 0; l < 10; ++l)
    {

        tx = x;
        while (tx > 0)
        {
            rem = tx % 10;
            tx = tx / 10;
            if (rem == l)
                cout << rem;
        }
    }
    return 0;
}