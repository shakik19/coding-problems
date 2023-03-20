#include "ctype.h"
#include "stdio.h"
const int MAX = 10000;

int main() {
  char s[MAX];
  fgets(s, sizeof(s), stdin);
  int len = 0, vowel_count = 0;
  while (s[len] != '\0') {
    len++;
  }
  for (int i = 0; i < len; i++) {
    s[i] = tolower(s[i]);
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
        s[i] == 'u') {
      vowel_count++;
    }
  }
  printf("%i\n", vowel_count);
}