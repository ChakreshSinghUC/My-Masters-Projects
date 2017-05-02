#include <iostream>
#include <string>
using namespace std;

bool KMP(string S, string P, int m, int i)
{
  bool flag = false;
  int pos = m;
  int p = i;
  int l = 0;
  int h;
  while (flag != true && (m < S.length() || p < P.length()))
  {
    if (P[p] == S[m])
    {
      l++;
      if (P[p] == P[0] && p > i)
      {
        cout << "h:" << h << endl;
        h = p; //head of the next search
      }
      if ((l + 1 + p) == P.length())
      {
        cout << "pos:" << pos << endl;
        flag = true;
      }
    }

    m++;
    p++;
  }
  //if  flag is false and we still have enough length of the string S which is yet to be parsed
  if (flag == false && (S.length() - m) >= P.length())
  {
    cout << m << endl;
    KMP(S, P, m - 1, h);
  }

  return flag;
}
int main()
{
  string S = "0000absaxfbea0ayee";
  string P = "absaae";
  int m = 0, i = 0;
  cout << KMP(S, P, 0, 0);
  return -1;
}