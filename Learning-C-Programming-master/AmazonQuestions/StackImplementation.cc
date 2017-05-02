#include <iostream>
using namespace std;
class stackImp
{
public:
  void PUSH(int S[], int n, int &top)
  {
    if (top < 99)
    {
      top++;
      S[top] = n;
    }
    cout << "\nInserted " << n << " now top = " << top;
  }
  void POP(int &top)
  {
    if (top == 0)
      cout << "\nError: Stackunderflow.";
    else
    {
      top--;

      cout << "\nAfter deletion, top = " << top;
    }
  }
};
int main()
{
  stackImp obj;
  int S[100];
  int top = 0;
  int x;
  int n;
  char ch;
  do
  {
    cout << "\n1.INSERT\n2.DELETE\nEnter your choice: ";
    cin >> x;
    switch (x)
    {
    case 1:
      cout << "\nEnter an integer: ";
      cin >> n;
      obj.PUSH(S, n, top);
      cout << "..top: " << top;
      break;
    case 2:
      obj.POP(top);

      break;
    default:
      cout << "\nInvalid choice!";
      break;
    }
    cout << "\nWanna continue?(y/n): ";
    cin >> ch;
  } while (ch == 'y' || ch == 'Y');
  cout << "\the Stack now is:";
  for (int i = 1; i <= top; i++)
    cout << S[i] << endl;
  return -1;
}