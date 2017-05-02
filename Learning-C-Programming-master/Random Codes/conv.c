#include <stdio.h>

int main() {

  int c;
  printf("\n Enter a Roman alphabet in lower case: ");
  c = getchar();
  c = 'a' + c - 'A';
  putchar(c);
  printf("\n");
  return 0;
}