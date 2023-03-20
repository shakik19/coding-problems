#include <stdio.h>

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  int row, col;
  scanf("%i %i", &row, &col);
  ll arr[row][col];
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      scanf("%i", &arr[i][j]);
    }
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col / 2; j++) {
      arr[i][j] = arr[i][j] ^ arr[i][col - j - 1];
      arr[i][col - j - 1] = arr[i][j] ^ arr[i][col - j - 1];
      arr[i][j] = arr[i][j] ^ arr[i][col - j - 1];
    }
  }
  printf("Reversed\n");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf("%3lli ", arr[i][j]);
    }
    printf("\n");
  }
}