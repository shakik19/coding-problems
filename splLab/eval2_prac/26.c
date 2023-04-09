#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int matrix[MAX_ROWS][MAX_COLS];
int rows, cols;

void InputMatrix() {
  printf("Enter the number of rows and columns for the matrix:\n");
  scanf("%d %d", &rows, &cols);

  printf("Enter the elements of the matrix:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }
}

void ShowMatrix() {
  printf("The matrix is:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}

void ScalarMultiply(int scalar) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      matrix[i][j] *= scalar;
    }
  }
}

int main() {
  InputMatrix();

  ShowMatrix();

  int scalar;
  printf("Enter the scalar value to multiply the matrix by:\n");
  scanf("%d", &scalar);

  ScalarMultiply(scalar);

  ShowMatrix();

  return 0;
}
