#include "ctype.h"
#include "stdio.h"
#include "string.h"
const int MAX = 65535;

// int word_count(char s[]) {
//   int len = strlen(s);
//   int count = 1;
//   for (int i = 0; i < len; i++) {
//     if (s[i] == ' ') {
//       count++;
//     }
//   }
//   return count;
// }
int endCheck(char c) {
  if (c == 32 || c == '!' || c == '.' || c == ';' || c == '?' || c == '/' ||
      c == ',' || c == '\0') {
    return 1;
  } else {
    return 0;
  }
}
int countTarget(char s[], char t[]) {
  int count = 0;
  int start = 0;
  for (int i = 0; i < strlen(s); i++) {
    // if (endCheck(s[i]) == 1) start = i+1;
    if (endCheck(s[i]) == 1) {
      printf("%c\n", s[i]);
      char pTarget[i - start];
      // printf("%i\n", i - start);
      int increment = 0;
      for (int j = start; j < i; j++) {
        pTarget[increment] = s[j];
        increment++;
      }
      if (strcmp(pTarget, t) == 0) {
        count++;
      }
      start = i + 1;
    }
  }
  return count;
}
// int countTarget(char s[], char t[]) {
//   int count = 0;
//   for (int i = 0; i < word_count(s); i++) {
//     for (int k = 0; k < strlen(s); k++) {
//       if (endCheck(s[k])) {
//         for (int j = 0; j < strlen(t); j++) {
//         }
//       }
//     }
//   }
// }

int main() {
  char s[MAX];
  char t[MAX];
  fgets(s, sizeof(s), stdin);
  fgets(t, sizeof(t), stdin);
  // printf("%i\n", countTarget(s, t));
}