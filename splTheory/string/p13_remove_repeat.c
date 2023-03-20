#include "ctype.h"
#include "stdio.h"
#include "string.h"
const int MAX = 65535;

void removeRepeats(char s[]) {
  int len = strlen(s);
  int flag;
  for (int i = 0; i < len; i++) {
    flag = 1;
    //! if (isalpha(s[i]) == 0) {
    //!   printf("%c", s[i]);
    //!   continue;
    //! }
    for (int j = i - 1; j > -1; j--) {
      //!   if (isalpha(s[j])) {
      //!     char c = tolower(s[i]);
      //!     char cc = tolower(s[j]);
      //!     if (c == cc) {
      //!       flag = 0;
      //!       break;
      //!     }
      //!   }
      if (s[i] == s[j]) {
        flag = 0;
        break;
      }
    }
    if (flag) {
      printf("%c", s[i]);
    }
  }
  //   printf("\n");
}
int main() {
  // start
  char s[MAX];
  fgets(s, sizeof(s), stdin);
  removeRepeats(s);
}