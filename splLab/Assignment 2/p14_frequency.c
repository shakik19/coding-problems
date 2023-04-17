#include "ctype.h"
#include "stdio.h"
const int MAX = 65535;

int main() {
  // start
  char s[MAX];
  int freq[26] = {0};
  fgets(s, sizeof(s), stdin);
  int len = strlen(s);
  for (int i = 0; i < len; i++) {
    char c = tolower(s[i]);
    if (isalpha(c)) {
      freq[c - 'a']++;
    }
  }
  int c, max = 0;
  for (int i = 0; i < 26; i++) {
    // max_occured = (freq[i] > max_occured) ? freq[i] : max_occured;
    if (freq[i] > max) {
      max = freq[i];
      c = i;
    }
  }
  printf("%c (or %c)", ('A' + c), ('a' + c));
}