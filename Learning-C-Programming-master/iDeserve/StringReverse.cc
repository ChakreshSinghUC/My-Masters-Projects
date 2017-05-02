/*Step 1. Reverse each word. 
Step 2. Reverse the whole string.
Example:
Input String:    This is a string
After Step 1:    sihT si a gnirts
<did not do the second part>
After Step 2:    string a is This*/
#include <iostream>
using namespace std;
void reverseString(char str[], int low, int high)
{
    for (int i = high - 1; i >= low; i--)
        cout << str[i];
    cout << " ";
}

int main()
{
    char str[] = "This is a string";
    int sizeString = sizeof(str) / sizeof(str[0]);
    int i = 0;
    int low = 0;
    int high = 0;
    int temp = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            i++;
        }
        else
        {
            high = i;
            reverseString(str, low, high);
            low = i + 1;
            i++;
        }
    }

    reverseString(str, low, sizeString - 1);

    cout << endl;

    return -1;
}