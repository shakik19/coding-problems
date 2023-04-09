#include <stdio.h>

int len(char str[]);

int main(void) {
  char str[500];
  fgets(str, sizeof(str), stdin);
  printf("%d\n", len(str));
}

int len(char str[]) {
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    count++;
  }
  return count - 1;
}