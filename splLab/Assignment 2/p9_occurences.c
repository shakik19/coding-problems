#include "ctype.h"
#include "stdio.h"
#include "string.h"
const int MAX = 10000;

int occurences(char s[], char k) {
  int len = strlen(s), count = 0;
  k = towlower(k);
  for (int i = 0; i < len; i++) {
    s[i] = tolower(s[i]);
    if (s[i] == k) count++;
  }

  return count;
}

int main() {
  // start
  char s[MAX], k;
  fgets(s, sizeof(s), stdin);
  scanf("%c", &k);
  printf("%i\n", occurences(s, k));
}