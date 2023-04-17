#include "stdio.h"
#include "string.h"

const int MAX = 10000;

int main() {
  char s1[MAX * 2], s2[MAX];
  gets(s1);
  gets(s2);
  int i, j = strlen(s1);
  s1[j] = ' ';
  j++;
  for (i = 0; s2[i] != '\0'; i++, j++) {
    s1[j] = s2[i];
  }
  s1[j] = '\0';
  printf("%s", s1);
}