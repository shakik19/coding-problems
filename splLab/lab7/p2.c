#include "stdio.h"

int main() {
  int n;
  scanf("%i", &n);
  int arr[n][n];
  int mid = n / 2;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%i", &arr[i][j]);
      if (n % 2 == 0) {
        // if ((i == 0 && (j > 0 && j < n - 1)) ||
        //     (i == n - 1 && (j > 0 && j < n - 1)) ||
        //     (j == 0 && (i > 0 && i < n - 1)) ||
        //     (j == n - 1 && (i > 0 && i < n - 1))) {
        //   sum += arr[i][j];
        // }
        if (i == 0 || i == n - 1) {
          if (j > 0 && j < n - 1) {
            sum += arr[i][j];
          }
        }
        if (j == 0 || j == n - 1) {
          if (i > 0 && i < n - 1) {
            sum += arr[i][j];
          }
        }
      } else if (n % 2 == 1) {
        // if ((i == 0 && (j > 0 && j < n - 1)) ||
        //     (i == n - 1 && (j > 0 && j < n - 1)) ||
        //     (j == 0 && (i > 0 && i < n - 1)) ||
        //     (j == n - 1 && (i > 0 && i < n - 1)) || (i == mid && j == mid)) {
        //   sum += arr[i][j];
        // }
        if (i == 0 || i == n - 1) {
          if (j > 0 && j < n - 1) {
            sum += arr[i][j];
          }
        }
        if (j == 0 || j == n - 1) {
          if (i > 0 && i < n - 1) {
            sum += arr[i][j];
          }
        }
        if (i == mid && j == mid) {
          sum += arr[i][j];
        }
      }
    }
  }
  printf("%i\n", sum);
}