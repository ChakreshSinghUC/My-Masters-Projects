#include <iostream>
using namespace std;
struct node {
  int data;
  node *next;
};
int main() {
  int x;
  char ch = 'y';
  node *start = NULL;
  

  while (ch == 'y' || ch == 'Y') {
    node *n;
    cout << "Enter value: ";
    cin >> x;
    n->data = x;
    n->next = start;
    start = n;
    cout << "\nWann enter more?";
    cin >> ch;
  }

  /* while (temp->next != NULL) {
     cout << temp->data << "\t";
     temp = temp->next;
   }*/
  return -1;
}