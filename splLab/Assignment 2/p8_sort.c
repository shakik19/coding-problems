#include "stdbool.h"
#include "stdio.h"
#include "string.h"
int main() {
  char s[62555];
  fgets(s, sizeof(s), stdin);
  s[strcspn(s, "\n")] = '\0';
  for (int i = 0; s[i] != '\0'; i++) {
    bool check = true;
    for (int j = i + 1; s[j] != '\0'; j++) {
      if (s[i] > s[j]) {
        char c = s[j];
        s[j] = s[i];
        s[i] = c;
        check = false;
      }
    }
    if (check) break;
  }
  puts(s);
}