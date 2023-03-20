#include "ctype.h"
#include "stdio.h"
#include "string.h"
const int MAX = 10000;

int main() {
  // start
  char s[MAX];
  fgets(s, sizeof(s), stdin);
  int len = strlen(s);
  for (int i = 0; i < len; i++) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      s[i] = 'A' + s[i] - 'a';
    } else if (s[i] >= 'A' && s[i] <= 'Z') {
      s[i] = 'a' + s[i] - 'A';
    }
  }
  printf("%s", s);
}