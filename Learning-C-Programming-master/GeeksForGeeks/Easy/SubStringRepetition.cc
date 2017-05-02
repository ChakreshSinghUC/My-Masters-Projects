//Check is a string is a concatenation of some of its substring
#include <iostream>
#include <string>

using namespace std;

bool checkSubStr(int len, string s1, int factor)
{

    bool r;
    string temp;
    string s;
    string::iterator itr;
    int index;
    for (index = 0, itr = s1.begin(); index < len; itr++, index++)
    {
        s = s + *itr;
    }
    temp = s;
    for (index = 0; index < factor - 1; index++)
    {
        temp = temp + s;
    }
    s = temp;
    if (s == s1)
        r = true;
    else
        r = false;
    return r;
}
int main()
{
    string s1 = "absabsabs";

    // int t;
    bool result;
    // cin >> t;
    // while (t--)
    // {
    if (!s1.empty())
    {
        for (int i = 1; i <= s1.length(); i++)
        {
            if (s1.length() % i == 0)
            {
                result = checkSubStr(i, s1, s1.length() / i);
                cout << result << endl;
            }
        }
    }

    // }
    return -1;
}