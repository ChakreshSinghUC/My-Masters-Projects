#include <iostream>
#include <string>
using namespace std;
int lengthOfSubStringWithNoRepeatition(string s)
{
    int len = 0;
    int array[256];
    for (int i = 0; i < 256; i++)
        array[i] = -1;
    int repeated_length = -1;
    for (int i = 0; i < s.length(); i++)
    {
        if (array[s[i]] > repeated_length)
        {
            repeated_length = array[s[i]];
        }
        array[s[i]] = i;
        //repetition has happened
        len = max(len, i - repeated_length);
        //shift the left bound
    }
    return len;
}
int main()
{
    string s = "abaabbaacb";
    cout << lengthOfSubStringWithNoRepeatition(s) << endl;
}