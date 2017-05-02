#include <iostream>
#include <string>
using namespace std;
int lengthOfNonReaptingSubString(string s)
{
    int len = 0;
    int array[256];
    for (int i = 0; i < 256; i++)
        array[i] = -1;
    int size = -1;
    for (int i = 0; i < s.length(); i++)
    {
        if (array[s[i]] > size) //think, why??
            size = array[s[i]];
        array[s[i]] = i;

        len = max(len, (i - size));
    }
    return len;
}
int main()
{
    string s = "universityofcincinnati";
    cout << lengthOfNonReaptingSubString(s);
}