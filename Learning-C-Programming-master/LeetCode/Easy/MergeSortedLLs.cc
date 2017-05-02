// Merge two sorted linked lists and return it as a new list. The new list
// should be made by splicing together the nodes of the first two lists.
//@Author: Chakresh Singh
//@Date: 26-Mar-2017
#include <iostream>
using namespace std;

struct ListNode
{
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};
void printLL(ListNode *head)
{
  while (head)
  {
    cout << head->next->val << "->";
    head = head->next;
  }
  cout << endl;
}
void appendTail(ListNode *&head, int val)
{
  ListNode *p;
  head = p;
  while (p->next)
  {
    p = p->next;
  }
  ListNode *ptr = new ListNode(val);
  p->next = ptr;
}
ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
  ListNode *l3;
  while (l1 != NULL && l2 != NULL)
  {
    if (l1->val <= l2->val)
    {
      appendTail(l3, l1->val);
      l1 = l1->next;
    }
    else
    {
      appendTail(l3, l2->val);
      l2 = l2->next;
    }
  }
  if (l1 == NULL && l2 != NULL)
  {
    ListNode *p;
    l3 = p;
    while (p->next)
    {
      p = p->next;
    }
    p->next = l2;
  }
  if (l1 != NULL && l2 == NULL)
  {
    ListNode *p;
    l3 = p;
    while (p->next)
    {
      p = p->next;
    }
    p->next = l1;
  }

  return l3;
}

int main()
{
  ListNode *head1;
  ListNode *l1 = new ListNode(0);
  l1->next = new ListNode(3);
  l1->next->next = new ListNode(5);
  l1->next->next->next = new ListNode(7);
  head1->next = l1;
  printLL(head1);
  ListNode *head2;
  ListNode *l2 = new ListNode(1);
  l2->next = new ListNode(2);
  l2->next->next = new ListNode(5);
  l2->next->next->next = new ListNode(8);
  head2->next = l2;
  ListNode *l3 = mergeTwoLists(l1, l2);

  return 0;
}