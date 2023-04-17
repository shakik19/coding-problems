#include "stdbool.h"
#include "stdio.h"
#include "string.h"

const int MAX = 10000;

// int palindrome_check(char s[]) {
//   int len = strlen(s);
//   int temp_length = len - 1;
//   len = (len % 2 == 0) ? len / 2 : (len + 1) / 2;
//   for (int i = 0; i < len; i++) {
//     if (s[i] != s[temp_length - i]) {
//       return 0;
//     }
//   }
//   return 1;
// }
//! 0123456
//! RACECAR
//! 012345
//! aabbaa

bool palindrome_check(char s[], int left, int right) {
  if (left >= right) return true;
  if (s[left] == s[right]) {
    return palindrome_check(s, (left + 1), (right - 1));
  } else {
    return false;
  }
}

int main() {
  // start
  char s[MAX];
  fgets(s, sizeof(s), stdin);
  if (palindrome_check(s, 0, (strlen(s) - 2)))
    printf("YES\n");
  else
    printf("NO\n");
}