#include "stdio.h"

int main() {
  int row, col;
  scanf("%i %i", &row, &col);
  int arr[row][col], rowWise[row * col], colWise[row * col];
  int len = 0;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      scanf("%i", &arr[i][j]);
      rowWise[len] = arr[i][j];
      len++;
    }
  }
  len = 0;
  for (int i = 0; i < col; i++) {
    for (int j = 0; j < row; j++) {
      colWise[len] = arr[j][i];
      len++;
    }
  }
  printf("Row-wise: ");
  for (int i = 0; i < (row * col); i++) {
    printf("%i ", rowWise[i]);
  }
  printf("\nCol-wise: ");
  for (int i = 0; i < (row * col); i++) {
    printf("%i ", colWise[i]);
  }
  printf("\n");
}
// 1 2 3 4 5 6 7 8 9