#include <iostream>
#include <stdlib.h>
using namespace std;
struct ListNode {
  int val;
  ListNode *next;
};
void printLL(ListNode *head) {
  ListNode *ptr; // = new ListNode;
  ptr = head;
  while (ptr) {
    cout << ptr->val << "->";
    ptr = ptr->next;
  }
  cout << endl;
}
ListNode *removeNthFromEnd(ListNode *head, int n) {
  ListNode *ptr;
  ptr = head;
  head = ptr;
  ListNode *ptr_temp;
  ptr_temp = ptr;
  int N = 0;
  while (ptr) {
    N++;
    ptr = ptr->next;
  }
  if (n > N) {
    cout << "\nError: Not that many elements in the Linked List!!!";
    return NULL;
  } else if (N == n) {
    ptr = head->next;
    head = ptr;
  } else if (N > n) {
    int pos = N - n;
    ptr = head;
    int i = 0;
    while (i < pos - 1) {
      ptr = ptr->next;
      i++;
    }
    //   cout << ptr->val << endl;
    ptr->next = (ptr->next) ? ptr->next->next : NULL;
    //   cout << ptr->next->val << endl;
  }
  return head;
}
int main() {
  ListNode *head;
  head = NULL;
  for (int i = 1; i < 10; i++) {
    ListNode *obj = new ListNode;
    obj->val = i;
    obj->next = head;
    head = obj;
  }
  printLL(head);
  printLL(removeNthFromEnd(head, 9));
}