#include <iostream>
using namespace std;
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
    cout << root->value << " ";
  findLeaf(root->left);
  findLeaf(root->right);
}
int main() {
  int A[] = {61,  8,   48,  767, 675, 465, 323, 95,  91,  212, 156, 201,
             210, 240, 265, 261, 270, 401, 393, 388, 425, 558, 556, 502,
             478, 598, 563, 587, 646, 621, 754, 689, 686, 696, 713, 702,
             757, 993, 967, 870, 837, 829, 925, 920, 999};
  int size = sizeof(A) / sizeof(A[0]);
  Node *root = buildABST(A, size);

  findLeaf(root);
  return -1;
}