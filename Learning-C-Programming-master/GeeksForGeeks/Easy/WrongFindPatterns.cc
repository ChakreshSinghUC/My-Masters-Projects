/**    Given a string S and another string W, find the number times W appears in string S. 
    For example consider S = {abcdrtbwerrcokokokd} and W = {bcd}. So here the no. of times W appears in S is 2. 
    Note: Once the letter has been used in forming the string W, it should not be repeated.
*/
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cout << "Enter t: ";
    cin >> t;
    string str;
    string sub;
    string S;
    string temp;
    while (t--)
    {
        cin >> str; // = "abcdrtbwerrcokokokd";
        cin >> sub; // = "bdc";
        string all = "abcdefghijklmnopqrstuvwxyz";
        S = str;
        for (string::iterator itr = sub.begin(); itr != sub.end(); itr++)
        { //remove sub from all to get the alphabets that we are not interested in
            all.erase(std::remove(all.begin(), all.end(), *itr), all.end());
        }
        for (string::iterator itr = all.begin(); itr != all.end(); itr++)
        { //remove the new all from str
            str.erase(std::remove(str.begin(), str.end(), *itr), str.end());
        }
        temp = str;
        cout << str << endl;
        for (string::iterator itr = str.begin(); itr != str.end(); itr++)
        {
            string::size_type i = str.find(sub);
            if (i != std::string::npos)
                str.erase(i, sub.length());
        }
        cout << str << endl;
        cout
            << (temp.size() - str.size()) / sub.size() << endl;
        //    cout << str.size() / sub.size() << endl;
        all = "abcdefghijklmnopqrstuvwxyz";
    }
    return -1;
}