//Check if string has balanced brackets or not
//@Author: Chakresh Singh.
#include <iostream>
#include <string>
#include <stack>
using namespace std;
int func(string str)
{
    stack<char> s;
    int i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] == '(' || str[i] == '[' || str[i] == '{' || str[i] == '<'))
            s.push(str[i]);
        else if ((str[i] == ')' || str[i] == ']' || str[i] == '}' || str[i] == '>'))
        {
            if (str[i] == ')' && s.top() == '(')
                s.pop();
            else if (str[i] == ']' && s.top() == '[')
                s.pop();
            else if (str[i] == '}' && s.top() == '{')
                s.pop();
            else if (str[i] == '>' && s.top() == '<')
                s.pop();
            else
                return 0;
        }

        i++;
    }
    if (s.empty())
        return 1;
    else
        return 0;
}
int main()
{
    string str = "<>[]{}((()))";
    cout << func(str);
    return -1;
}
