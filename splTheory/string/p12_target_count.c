#include "ctype.h"
#include "stdio.h"
#include "string.h"
const int MAX = 65535;

// int countTarget(char s[], char t[]) {
//   int count = 0;
//   for (int i = 0; i < strlen(s); i++) {
//     for (int j = 0; j < strlen(t); j++) {
//       if (s[j] != s[i]) {
//         break;
//       } else {
//         if (j == (strlen(t) - 1)) {
//           if (isalpha(s[++i]) != 0) {
//             count++;
//             break;
//           }
//         }
//       }
//     }
//   }
//   return count;
// }

int count_target(char s[], char t[]) {
  int count = 0, lenT = strlen(t);
  for (int i = 0; i < strlen(s) - 1; i++) {
    for (int j = 0; j < lenT; j++) {
      printf("i: %c  j: %c\n", s[i], s[j]);
      if (s[j] == s[i]) {
        if (j == lenT - 1) {
          printf("check\n");
          if (isalpha(s[i + 1]) != 1) {
            count++;
          }
        } else {
          ++i;
        }
      } else {
        break;
      }
    }
  }
  return count;
}

int main() {
  char s[MAX];
  char t[MAX];
  fgets(s, sizeof(s), stdin);
  fgets(t, sizeof(t), stdin);
  printf("%i\n", count_target(s, t));
}