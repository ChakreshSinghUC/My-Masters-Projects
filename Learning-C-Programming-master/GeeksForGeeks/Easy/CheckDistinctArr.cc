/**
A professor once went to a party. As he did not meet any person of his intellect there, he got bored and started thinking of a problem. The problem was to identify if an ongoing party was an "only boys" party or an “only girls” party. As the rules are strict, no co-ed parties are allowed by the professor's research. After many researches, he came to a conclusion that if all the persons in the party are wearing different colored robes, then that is a girl’s only party. If we even get one duplicate color, it must be a boy’s party. He has now asked you, to code his theorem so that he may move on to more advance research.

Input
The first line of each test case contains an integer T, denoting the no of test cases. Then T test cases follow. The first line of each test case contains an integer N denoting the no of people in the party. In the next line are N space separated values of Ai denoting the color of the robes.

Output
For each test case in a new line print “BOYS” without quotes if it’s a boy’s party, else print “GIRLS”.
http://www.practice.geeksforgeeks.org/problem-page.php?pid=1403
*/
#include <iostream>
#include <set>
using namespace std;

int main() {

  int A[] = {5, 1, 2, 3};
  int n = sizeof(A) / sizeof(A[0]);

  set<int> sa(A, A + n);
  if (sa.size() == n)
    cout << "GIRLS";
  else
    cout << "BOYS";
  return -1;
}