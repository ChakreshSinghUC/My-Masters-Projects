
#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    // cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((n - i + 1) <= j)
                cout << "#";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
