#include "stdio.h"

int main() {
  int n;
  scanf("%i", &n);
  int k, k1;
  for (int i = 1; i <= n; i++) {
    k = 1;
    for (int j = 1; j <= i; j++) {
      printf("%i", k);
      k++;
    }
    for (int k = 1; k < 2 * (n - i); k++) {
      /* code */
      printf("_");
    }
    if (i == n) {
      k = i - 1;
    } else {
      k = i;
    }
    for (int l = k; l >= 1; l--) {
      printf("%i", k);
      k--;
    }
    printf("\n");
  }
}