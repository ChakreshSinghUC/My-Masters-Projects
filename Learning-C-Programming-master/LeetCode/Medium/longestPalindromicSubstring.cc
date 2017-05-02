//brute force
#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string s, int i, int j)
{

    while (i < j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

string longestPalindromicSubstring(string s)
{

    int l = 0, r = s.length() - 1;
    int left, right;
    int len = 0;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = s.length() - 1; j >= i; j--)
            if (isPalindrome(s, i, j))
            {
                if (j - i + 1 > len)
                {
                    left = i;
                    right = j;
                    len = j - i + 1;
                }
            }
    }

    string res;

    for (int i = left; i <= right; i++)
        res += s[i];

    return res;
}
int main()
{

    string s = "chakreshsinghhgnis";
    string r = longestPalindromicSubstring(s);
    cout << r;
}