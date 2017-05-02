// how to find out leaf node value from a preorder sequence int array of BST
#include <iostream>

using namespace std;
void leafNode(int A[], int first, int last) {
  int b;
 
  if (first == last) {
    cout << A[first] << ",";
    return;
  }
  if (A[first] > A[last]) {
    b = last;
    leafNode(A, first + 1, b);
  } else {
    for (int i = (first + 1); i <= last; i++) {
      if (A[i] >= A[first]) {
        b = i;//right sub tree root
        break;
      }
    }
  }

  if (A[first] > A[first + 1] && (first + 1 < b) &&
      b != last) // there is a left sub tree

    leafNode(A, first + 1, b - 1);

  if (b <= last) // there is right sub tree
  {
    leafNode(A, b, last);
  }
}
struct Node {
  int value;
  Node *left;
  Node *right;
};
Node *createNewNode(int x) {
  Node *ptr = new Node;

  ptr->value = x;
  ptr->left = NULL;
  ptr->right = NULL;

  return ptr;
}
void addToBST(Node *ptr, Node *root) {
  if (ptr->value < root->value) {
    if (root->left != NULL)
      addToBST(ptr, root->left);
    else
      root->left = ptr;

  } else {
    if (root->right != NULL)
      addToBST(ptr, root->right);
    else
      root->right = ptr;
  }
}
Node *buildABST(int A[], int size) {
  Node *root = createNewNode(A[0]);
  Node *tempLeft = NULL;
  Node *tempRight = NULL;

  for (int i = 1; i < size; i++) {
    Node *ptr = createNewNode(A[i]);
    addToBST(ptr, root);
  }

  return root;
}
void findLeaf(Node *root) {
  if (root == NULL)
    return;
  if (root->left == NULL && root->right == NULL)
    cout << root->value << ",";
  findLeaf(root->left);
  findLeaf(root->right);
}
int main() {
  Node *root;
  int preOrderBST[] = {61,  8,   48,  767, 675, 465, 323, 95,  91,
                       212, 156, 201, 210, 240, 265, 261, 270, 401,
                       393, 388, 425, 558, 556, 502, 478, 598, 563,
                       587, 646, 621, 754, 689, 686, 696, 713, 702,
                       757, 993, 967, 870, 837, 829, 925, 920, 999};
  int size = sizeof(preOrderBST) / sizeof(preOrderBST[0]);
  int root1 = 0;

  leafNode(preOrderBST, root1, size - 1);

 // root = buildABST(preOrderBST, size);
  //cout << endl;
 // findLeaf(root);
  cout << endl;
  return -1;
}