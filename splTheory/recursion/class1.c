/*
! 1. Reverse a string using recursion
! 2. Check if a string is a palindrome using recursion
*/

#include "stdio.h"
#include "string.h"
#define MAX 65552

void reverse(char *s) {
  if (*s == '\0')
    return;
  else {
    reverse(s + 1);
    printf("%c", *s);
  }
}

int main() {
  char s[MAX];
  fgets(s, sizeof(s), stdin);
  s[strcspn(s, "\n")] = '\0';
  int len = strlen(s);
  reverse(s);
  printf("\n");
}