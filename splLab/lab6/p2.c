#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int k = n;
  int mode = 1;
  for (int i = 1; i <= n; i++) {
    // SPACE PRINT
    for (int j = 1; j <= n - i; j++) {
      printf("  ");
    }
    // First Half PRINT
    int mid = (2 * i - 1) / 2 + 1;
    for (int j = 1; j <= mid - 1; j++) {
      printf("%d ", k);
      if (mode == 1) {
        k--;
        if (k == 1) mode = -mode;
      } else {
        k++;
        if (k == n) mode = -mode;
      }
    }
    printf("#");

    // Second Half PRINT
    k = 2;
    for (int j = mid + 1; j <= 2 * i - 1; j++) {
      printf("%d ", k);
      k++;
    }

    printf("\n");
  }

  return 0;
}