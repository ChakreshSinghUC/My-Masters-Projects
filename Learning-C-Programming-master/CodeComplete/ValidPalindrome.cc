
//O(n)
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()

{
    string str = "A man, a  plan, a canal: Panama";
    //covert string to lower case
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    //remove all black spaces from the string
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    string::iterator itr;
    itr = str.begin();
    while (itr != str.end())
    {
        //erase non-alphabets.
        if (!isalpha(*itr))
            str.erase(itr);
        itr++;
    }
    int i = 0;
    int j = str.length() - 1;
    while (i != j)
    {
        if (str[i] == str[j])
        {
            i++;
            j--;
            if (i == j)
                cout << "\nIs a Palindrome." << endl;
        }
        else
        {
            cout << "\nNot a Palindrome.";
            break;
        }
    }
    return -1;
}