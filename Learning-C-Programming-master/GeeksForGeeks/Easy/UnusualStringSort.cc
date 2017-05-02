/**
Babul likes to play with string and he always tries do something new with it. This time he found a very typical way to sort a string. What he did is that he took a string composed of both lowercase and uppercase letters and sorted it in such a manner such that the uppercase and lowercase letter comes in an alternate manner but in sorted way, but Babul has to do some other stuffs also, so he needs your help to complete this job as fast as possible.

Example:

Input: bAwutndekWEdkd

Output: AbEdWddekkntuw
*/
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
void UnusualStringSort(string A)
{
    int count = -1;
    sort(A.begin(), A.end());
    cout << "Usual sorted Input: " << endl;
    cout << A << endl;
    int temp;
    cout << "Unusual sorted Output: " << endl;
    for (int i = 0; i < A.length(); i++)
    {
        count++;
        if (A[i] >= 97)
        {
            temp = i;
            break;
        }
    }
    int n = 0;     //number of printed alphabets
    int i = 0;     //index of Uppercase alphabets
    int j = count; //index of lower case alphabets

    while (n < A.length())
    {
        if (i <= count - 1) //there are (count-1) number of Upercase alphabets in the string
        {
            cout << A[i];
            i++;
            n++;
            if (j <= A.length() - count + 1)
            {
                cout << A[j];
                j++;
                n++;
            }
        }
        else
        {
            cout << A[j];
            j++;
            n++;
        }
    }
}
int main()
{
    string A = "bAwutndekWEdkd";
    UnusualStringSort(A);
    return 0;
}