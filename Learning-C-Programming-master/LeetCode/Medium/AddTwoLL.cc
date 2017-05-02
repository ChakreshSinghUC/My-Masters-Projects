/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <iostream>
using namespace std;
struct ListNode
{
  int val;
  ListNode *next;
};
class Solution
{
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
  {
    ListNode preHead(0), *p = &preHead;
    int extra = 0;
    while (l1 || l2 || extra)
    {
      int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + extra;
      extra = sum / 10;
      p->next = new ListNode(sum % 10);
      p = p->next;
      l1 = l1 ? l1->next : l1;
      l2 = l2 ? l2->next : l2;
    }
    return preHead.next;
  }
};
int main()
{
  ListNode *l1 = new ListNode;
  l1->val = 2;
  l1->next = NULL;
  ListNode *temp;
  l1 = temp;

  l1->val = 0;
  l1->next = temp;
  temp = l1;

  ListNode *l2 = new ListNode;
  l2->val = 2;
  l2->next = NULL;
  ListNode *temp2;
  l2 = temp2;

  l2->val = 0;
  l2->next = temp2;
  temp2 = l2;

  return 0;
}