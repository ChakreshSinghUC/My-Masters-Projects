#include <iostream>
using namespace std;
struct Node
{
    int value;
    Node *Left;
    Node *Right;
};
Node *newNode(int x)
{
    Node *ptr = new Node;
    ptr->value = x;
    ptr->Left = NULL;
    ptr->Right = NULL;
    return ptr;
}
void insertNode(Node *&ptr, int x)
{
    if (ptr == NULL)
        ptr = newNode(x);
}
void preOrder(Node *ptr)
{
    if (ptr == NULL)
        return;
    cout << ptr->value << " ";
    preOrder(ptr->Left);
    preOrder(ptr->Right);
}
void inOrder(Node *ptr)
{
    if (ptr == NULL)
        return;
    inOrder(ptr->Left);
    cout << ptr->value << " ";
    inOrder(ptr->Right);
}

void postOrder(Node *ptr)
{
    if (ptr == NULL)
        return;
    postOrder(ptr->Left);
    postOrder(ptr->Right);
    cout << ptr->value << " ";
}
void printLeafNodes(Node *ptr)

{
    if (ptr == NULL)
        return;
    printLeafNodes(ptr->Left);
    printLeafNodes(ptr->Right);
    if (ptr->Left == NULL & ptr->Right == NULL)
        cout << ptr->value << " ";
}
int main()
{ //INCOMPLETE

    Node *root = new Node;
    root = newNode(5);

    return -1;
}