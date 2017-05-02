#include <iostream>
using namespace std;

struct node {
  int value;
  node *next;
};

int main() {
  node *temp = new node;

  node *start = new node;

  int x;
  char ch = 'Y';
  while (ch == 'y' || ch == 'Y') {
    node *ptr = new node;

    cout << "\nEnter value: ";
    cin >> x;
    ptr->value = x;

    temp = start;
    start = ptr;
    ptr->next = temp;
    cout << "\nWanna enter more? (y/n)";
    cin >> ch;
  }

  temp = start;
  while (temp != NULL) {
    cout << temp->value << "\t";
    temp = temp->next;
  }
  cout << endl;
  return -1;
}