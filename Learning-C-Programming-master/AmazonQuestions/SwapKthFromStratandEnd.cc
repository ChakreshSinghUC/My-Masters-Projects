#include <iostream>
using namespace std;
struct Node
{
    int x;
    Node *next;
};

void addValue(int val, Node *&head)
{
    Node *n = new Node(); // create new Node
    n->x = val;           // set value
    n->next = head;       // make the node point to the next node.
                          //  If the list is empty, this is NULL, so the end of the list --> OK
    head = n;             // last but not least, make the head point at the new node.
}

void display(Node *&head)
{

    Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->x;
        ptr = ptr->next;
        cout << "->";
    }
}
int main()
{
    Node *head = NULL;
    for (int i = 10; i >= 0; i--)
        addValue(i, head);
    display(head);
    return -1;
}