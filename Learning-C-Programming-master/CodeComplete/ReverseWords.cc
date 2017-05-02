/*Given an input string s, reverse the string word by word.

For example, given s = "the sky is blue", return "blue is sky the".*/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    string str = "the sky is blue";
    int n;

    n = str.length();
    //reverse the word
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
    int i = 0;

    bool flag = false;
    vector<char> temp;
    while (i < str.length())
    {
        while (str[i] != ' ' && i < str.length())
        {
            temp.push_back(str[i]);
            flag = true;
            i++;
        }

        if (flag)
        {
            reverse(temp.begin(), temp.end());

            for (auto itr = temp.begin(); itr != temp.end(); itr++)
            {
                cout << *itr;
            }

            temp.clear();
             flag = false;
        }   
        cout<<" ";    
        i++;
    }
   
    return -1;
}