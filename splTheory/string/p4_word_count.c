#include "stdio.h"
#include "string.h"

const int MAX = 10000;

int word_count(char s[]) {
  int len = strlen(s);
  int count = 1;
  for (int i = 0; i < len; i++) {
    /*|| s[i] == '!' || s[i] == '.' || s[i] == ';' ||
        s[i] == '?' || s[i] == '/' || s[i] == ','*/
    if (s[i] == ' ') {
      count++;
    }
  }
  return count;
}

int main() {
  char s[MAX];
  fgets(s, sizeof(s), stdin);
  printf("%i\n", word_count(s));
}