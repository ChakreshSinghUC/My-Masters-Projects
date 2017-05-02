#include <cstring>
#include <iostream>
#include <map>
#include <string>
#define ALPHABET_SIZE (26)
#define ARRAY_SIZE(a) sizeof(a) / sizeof(a[0])
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')

using namespace std;

struct TrieNode {
  TrieNode *children[ALPHABET_SIZE];
  bool isLeaf;
};

TrieNode *getNode(void) {
  TrieNode *pNode = NULL;
  pNode = new TrieNode; //(struct TrieNode *)malloc(sizeof(struct TrieNode));
  if (pNode) {
    int i;
    pNode->isLeaf = false;
    for (i = 0; i < ALPHABET_SIZE; i++)
      pNode->children[i] = NULL;
  }

  return pNode;
}
void insert(TrieNode *root, const char *key) {
  int level;
  int length = strlen(key);
  int index;
  TrieNode *pCrawl = root;
  for (level = 0; level < length; level++) {
    index = CHAR_TO_INDEX(key[level]);
    if (!pCrawl->children[index])
      pCrawl->children[index] = getNode();

    pCrawl = pCrawl->children[index];
  }

  // mark last node as leaf
  pCrawl->isLeaf = true;
}
bool search(struct TrieNode *root, const char *key) {
  int level;
  int length = strlen(key);
  int index;
  TrieNode *pCrawl = root;

  for (level = 0; level < length; level++) {
    index = CHAR_TO_INDEX(key[level]);

    if (!pCrawl->children[index])
      return false;

    pCrawl = pCrawl->children[index];
  }

  return (pCrawl != NULL && pCrawl->isLeaf);
}

int main() {
  // Input keys (use only 'a' through 'z' and lower case)
  char keys[][8] = {"the", "a", "there", "answer", "any", "by", "bye", "their"};
  char output[][32] = {"Not present in trie", "Present in trie"};
  TrieNode *root = getNode();
  // Construct trie
  int i;
  for (i = 0; i < ARRAY_SIZE(keys); i++)
    insert(root, keys[i]);

  // Search for different keys
  cout << "the: " << output[search(root, "the")];
  cout << "\nthese:\t" << output[search(root, "these")];
  cout << "\ntheir:\t" << output[search(root, "their")];
  cout << "\nthaw:\t" << output[search(root, "thaw")];

  return 0;
}