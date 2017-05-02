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
{
    /*****************
             5
           /   \
         6      7
        / \    /   
       8   9  10
      /   / \
    11   12 13
    ******************/
    Node *root = new Node;
    root = newNode(5);
    insertNode(root->Left, 6);
    insertNode(root->Left->Left, 8);
    insertNode(root->Left->Left->Left, 11);
    insertNode(root->Left->Right, 9);
    insertNode(root->Left->Right->Left, 12);
    insertNode(root->Left->Right->Right, 13);
    insertNode(root->Right, 7);
    insertNode(root->Right->Left, 10);
    cout << "The PreOrder traversal of the tree is as follows:\n";
    preOrder(root);
    cout << "\nThe InOrder traversal of the tree is as follows:\n";
    inOrder(root);
    cout << "\nThe PostOrder traversal of the tree is as follows:\n";
    postOrder(root);
    cout << "\nThe leaf nodes are as follows:\n";
    printLeafNodes(root);
    return -1;
}