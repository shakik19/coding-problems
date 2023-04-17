#include "ctype.h"
#include "stdio.h"
#include "string.h"
const int MAX = 65535;

int addDigits(char s[]) {
  int sum = 0;
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] >= '1' && s[i] <= '9') {
      sum += s[i] - '0';
    }
  }
  return sum;
}

int main() {
  char s[MAX];
  fgets(s, sizeof(s), stdin);
  printf("%i\n", addDigits(s));
}