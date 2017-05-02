#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    string str[5] = {"1000000001", "1000000002", "1000000003", "1000000004", "1000000005"};
    int N = 5;
    schar s[100000000];
    int sum = 0;
    int carry = 0;

    int max_length;
    for (int i = 0; i < N; i++)
    {
        if (max_length < str[i].length())
            max_length = str[i].length();
    }

    for (int i = 0; i < N; i++)
    {
        string((max_length - str[i].length()), '0').append(str[i]);
    }

    for (int i = max_length - 1; i > 0; i--)
    {
        s.push((stoi(str[i]) + stoi(str[i + 1]) + carry) % 10);
        carry = (stoi(str[i]) + stoi(str[i + 1])) / 10;
    }
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    cout << endl;
    return -1;
}