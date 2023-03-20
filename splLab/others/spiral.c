#include <stdio.h>
int main() {
  int row, col;
  scanf("%i %i", &row, &col);
  int mat[row][col];
  //   row = 5, col = 2;
  int arr[row * col];
  //   int mat[row][col] = {{7, 1}, {3, 2}, {4, 3}, {1, 4}, {9, 5}};
  //   {5, 2, 2, 5, 1}, {8, 1, 9, 7, 7}, { 3, 7, 8, 1, 4 }};

  //* Taking Matrix Input
  for (int i = 0; i < row; i++) {
    for (int j = 0; i < col; j++) {
      scanf("%i", &mat[i][j]);
    }
  }

  //* Spiraling
  int colReducer = 0, rowReducer = 0, pos = 0;
  while (pos < (row * col) - 1) {
    for (int up = colReducer; ((up < col - colReducer)); up++) {
      arr[pos] = mat[rowReducer][up];
      pos++;
    }
    for (int right = rowReducer + 1; ((right < row - rowReducer - 1));
         right++) {
      arr[pos] = mat[right][col - 1 - colReducer];
      pos++;
    }
    for (int down = col - colReducer - 1; ((down >= colReducer) && row > 1);
         down--) {
      arr[pos] = mat[row - rowReducer - 1][down];
      pos++;
    }
    for (int left = row - rowReducer - 2;
         ((left >= rowReducer + 1) && (col > 1)); left--) {
      arr[pos] = mat[left][colReducer];
      pos++;
    }
    if (row == col) arr[pos] = mat[(int)(row / 2)][(int)(col / 2)];
    colReducer++;
    rowReducer++;
  }

  //* Printing spiral array
  for (int i = 0; i < pos; i++) {
    printf("%i ", arr[i]);
  }
  printf("\n");
}