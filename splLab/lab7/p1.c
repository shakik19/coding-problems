#include "stdio.h"

int main() {
  int n, m;
  scanf("%i %i", &n, &m);
  int arr[n][m];
  int sum = 0;
  int midi = n / 2, midj = m / 2;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%i", &arr[i][j]);
      if (i < midi) {
        if (j == midj || (j == m) || (i == 0 && j < midj)) {
          sum += arr[i][j];
        }
      } else if (i == midi) {
        sum += arr[i][j];
      } else if (i > midi) {
        if (j == midj || j == 0 || (j > midj && i == n)) {
          sum += arr[i][j];
        }
      }
    }
  }
  //   for (int i = 0; i < n; i++) {
  //     for (int j = 0; j < m; j++) {
  //       printf("%2i ", arr[i][j]);
  //     }
  //     printf("\n");
  //   }
  printf("%i\n", sum);
}