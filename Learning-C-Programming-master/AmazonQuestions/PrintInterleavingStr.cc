#include <iostream>
#include <string.h>
using namespace std;
void printIlsRecur(string *str1, string *str2, string *iStr, int m,
                   int n, int i)
{
    // Base case: If all characters of str1 and str2 have been
    // included in output string, then print the output string
    if (m == 0 && n == 0)
        cout << iStr;

    // If some characters of str1 are left to be included, then
    // include the  first character from the remaining characters
    // and recur for rest
    if (m != 0)
    {
        iStr[i] = str1[0];
        printIlsRecur(str1 + 1, str2, iStr, m - 1, n, i + 1);
    }

    // If some characters of str2 are left to be included, then
    // include the  first character from the remaining characters
    // and recur for rest
    if (n != 0)
    {
        iStr[i] = str2[0];
        printIlsRecur(str1, str2 + 1, iStr, m, n - 1, i + 1);
    }
}
int main()
{
    string str1 = "AB";
    string str2 = "CD";
    string *iStr;
    printIlsRecur(str1, str2, iStr, str1.length(), str2.length(), 0);
    return 0;
    return -1;
}