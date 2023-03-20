#include "stdio.h"
const int MAX = 10000;

int strlen(char str[]) {
  int i;
  for (i = 0; str[i] != '\0'; i++) {
  }
  return i;
}

int main() {
  char str[MAX];
  fgets(str, sizeof(str), stdin);
  printf("%i\n", strlen(str));
}