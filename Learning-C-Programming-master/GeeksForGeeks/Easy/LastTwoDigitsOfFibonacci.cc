/*
http://www.practice.geeksforgeeks.org/problem-page.php?pid=1650

Somedays ago Leeana Learned about Fibonacci Number and then her uncle gave her a task. The task is to find the last two digits of nth Fibonacci number. 
The Fibonacci number sequence are: 0 1 1 2 3 5 8 13 21....... (0 based counting)
Note: Incase the fibonacci number is a single digit number print it with appending a 0 at its front ie for no 2 print 02.
Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains an integer n.
Output:
For each test case print the required answer in a new line.
Constraints:
1<=T<=100
0<=n<=10^18
Example:
Input:
2
0
7
Output:
00
13
**For More Examples Use Expected Output***/

#include <iostream>

using namespace std;
int fib(int n)
{
    if (n < 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;

        cout << fib(n - 1) % 100 << endl;
    }
    return -1;
}