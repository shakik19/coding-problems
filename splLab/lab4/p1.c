#include "stdio.h"

int main() {
  // start
  int n;
  scanf("%i", &n);
  int t = 1, mode = 1;
  for (int row = 1; row <= n; row++) {
    for (int space = 1; space <= n - row; space++) {
      printf(" ");
    }
    // first half
    for (int col = row; col >= 1; col--) {
      printf("%i", t);
      if (mode == 1) {
        t++;
        if (t == n) {
          mode = -mode;
        }
      } else {
        t--;
        if (t == 1) mode = -mode;
      }
    }
    printf("\n");
  }
}