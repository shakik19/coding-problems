#include <stdio.h>

int main() {
  int row;
  scanf("%i", &row);
  for (int i = 1; i <= row; i++) {
    if (i == 1 || i == row || i == ((row / 2) + 1)) {
      for (int j = 1; j <= row; j++) {
        printf("*");
      }
    } else {
      printf("*");
      for (int j = 0; j < (row - 2); j++) {
        printf("_");
      }

      printf("*");
    }
    printf("\n");
  }
}