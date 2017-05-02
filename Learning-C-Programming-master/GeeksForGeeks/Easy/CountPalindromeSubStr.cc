/*@Author: Chakresh Singh
*/
#include <iostream>
#include <string>

using namespace std;
// bool isPal(int start, int end, vector<char> v)
bool isPal(int start, int end, string v)
{

    while (start < end)
    {
        if (v[start] != v[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int funct(string S)
{
    int c = 0;
    int winLen = 0;
    // vector<char> v(S.begin(), S.end());

    for (int i = 0; i < S.size(); i++)
    {
        winLen = 0;
        while (i + winLen < S.size())
        {

            // if (isPal(i, i + winLen, v))
            if (isPal(i, i + winLen, S))
            {
                c++;
            }
            winLen++;
        }
    }

    return c;
}

int main()
{
    string S;
    int count;
    int t;
    int n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> S;

        count = funct(S);
        cout << count - n << endl;
    }
    return -1;
}