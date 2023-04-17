#include "stdalign.h"
#include "stdio.h"
#include "string.h"

void *ptr = NULL;
int find_substr(char *s1, char *s2);
int string_length(char s[]);

int main() {
  char s1[1000] = "madam", s2[1000] = "adam";
  scanf("%s %s", s1, s2);
  //   printf("%i\n", string_length(s1));
  int ans = (string_length(s1) > string_length(s2)) ? find_substr(s1, s2)
                                                    : find_substr(s2, s1);
  printf("%i\n", ans);
}
int string_length(char s[]) {
  int len = 0;
  while (*s != '\0') {
    len++;
    s++;
  }
  return len;
}
int find_substr(char *s1, char *s2) {
  if (*s2 == '\0')
    return 1;
  else if (*s1 == '\0')
    return 0;
  else if (*s1 == *s2)
    find_substr(++s1, ++s2);
  else if (*s1 != *s2) {
    ptr = &s2[0];
    find_substr(s1, ptr);
  }
}