#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string str;
    string sub;
    string S;
    string temp;
    string all = "abcdefghijklmnopqrstuvwxyz";
    int index = 0;
    int n = 1;
    int count = 0;
    while (t--)
    {
        cin >> str;
        cin >> sub;
        S = str;
        // for (string::iterator itr = str.begin(); itr != str.end(); itr++)
        while (n == 1)
        {
            string::size_type i = str.find(sub[index]);

            if (i != string::npos)
            {
                // cout<<sub[index];
                str.erase(i, 1);
                index++;
                i = str.find(sub[index]);
                if (index == sub.size())
                {

                    count++;
                    index = 0;
                }
            }
            if (i == string::npos)
                n = 0;
        }
        cout << count << endl;
    }

    return -1;
}