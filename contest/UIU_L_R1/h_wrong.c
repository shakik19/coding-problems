#include "ctype.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
const int MAX = 65535;

int main() {
  int t;
  scanf("%i", &t);
  int arr[26] = {0};
  t += 1;
  while (t--) {
    char q[MAX];

    fgets(q, sizeof(q), stdin);

    if (q[0] == '0') {
      for (int i = 2; i < strlen(q); i++) {
        arr[q[i] - 'a']++;
      }
    } else if (q[0] == '1') {
      int count = 0;
      for (int i = 0; i < 26; i++) {
        if (arr[i] > 0) count++;
      }
      printf("%i\n", count);
      memset(arr, 0, sizeof(arr));
    }
  }
}