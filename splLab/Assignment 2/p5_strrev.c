#include "stdio.h"
#include "string.h"
const int MAX = 10000;

int main() {
  // start
  char s[MAX];
  fgets(s, sizeof(s), stdin);
  int len = strlen(s);
  for (int i = 0; i < len / 2; i++) {
    s[i] = s[i] ^ s[len - 1 - i];
    s[len - 1 - i] = s[i] ^ s[len - 1 - i];
    s[i] = s[i] ^ s[len - 1 - i];
  }
  printf("%s", s);
}