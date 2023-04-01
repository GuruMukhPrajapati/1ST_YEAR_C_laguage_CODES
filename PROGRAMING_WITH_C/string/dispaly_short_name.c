#include <stdio.h>

int main() {
  char a[10], b[10], c[10];
  int i = 0;
  printf("Enter first middle and last name: ");
  scanf("%s%s%s", a, b, c);
  printf("%c.", a[i]);
  printf("%c.", b[i]);
  printf("%s\n", c);
  return 0;
}