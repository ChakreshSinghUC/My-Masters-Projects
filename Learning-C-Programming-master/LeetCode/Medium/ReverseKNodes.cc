/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};
ListNode *head = NULL;
class Solution {

public:
  void printLL(ListNode *head) {
    ListNode *ptr;
    ptr = head;
    while (ptr) {
      cout << ptr->val << "->";
      ptr = ptr->next;
    }
    cout << endl;
  }
  ListNode *reverseKGroup(ListNode *head, int k) {
    ListNode *r_head = NULL;
    ListNode *ptr;
    ptr = head;

    while (ptr && k != 0) {
      insertFront(r_head, ptr->val);
      ptr = ptr->next;
      k--;
    }
    printLL(r_head);
    return r_head;
  }
  void appenEnd(ListNode *head, ListNode *ptr) {}
  void insertFront(ListNode *&head, int val) {
    ListNode *obj = new ListNode(val);
    obj->next = head;
    head = obj;
  }
};
int main() {
  Solution classObj;
  classObj.insertFront(head, 2);
  classObj.insertFront(head, 1);
  classObj.printLL(head);
  ListNode *p = head;
  vector<int> vec;
  ListNode *pt = head;
  while (pt) {
    vec.push_back(pt->val);
    pt = pt->next;
  }
  int k = 2;
  int index = 0;
  int s = vec.size();

  while (k <= s) {
    reverse(vec.begin() + k * index, vec.begin() + k * (index + 1));
    s = s - k;
    index++;
  }
  reverse(vec.begin(), vec.end());
  ListNode *n_head = NULL;
  for (int i : vec) {
    classObj.insertFront(n_head, i);
  }
  classObj.printLL(n_head);
  /*
    int temp;
    ListNode *l;
    while (p) {
      ListNode *ptr = classObj.reverseKGroup(p, k);
      ptr->next = p;
      temp = k;
      while (temp != 0 && p != NULL) {
        p = p->next;
        temp--;
      }
    }*/
}