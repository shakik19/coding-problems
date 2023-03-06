#include "stdio.h"

int main() {
  // start
  int n;
  scanf("%i", &n);
  int k = n, k2 = 1, mode = 1;
  for (int row = 1; row <= n; row++) {
    for (int spaces = 1; spaces <= n - row; spaces++) {
      printf("  ");
    }
    int mid = (2 * row - 1) / 2 + 1;
    for (int i = 1; i <= mid - 1; i++) {
      printf("%i ", k);
      if (mode == 1) {
        k--;
        if (k == 1) mode = -mode;
      } else {
        k++;
        if (mode == -1) {
          if (k = n) mode = -mode;
        }
      }
    }
    printf("# ");
    k = n;
    for (int i = mid + 1; i <= 2 * row - 1; i++) {
      printf("%i ", k);
    }

    printf("\n");
  }
}