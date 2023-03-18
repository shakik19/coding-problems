#include "stdio.h"

#define mx __INT_MAX__
#define mn -(__INT_MAX__)

int main() {
  int row;
  scanf("%i", &row);
  int arr[row][6];
  int count = 1;
  int sum = 0;
  for (int i = 1; i <= row; i++) {
    /* code */
    for (int j = 1; j <= 6; j++) {
      if (i == 1 || j == 1 || j == 6 ||
          (((j == 3 || j == 4) && (i % 2 == 0)))) {
        sum += count;
        printf("%2i ", count);
      } else {
        printf("   ");
      }
      count++;
    }
    printf("\n");
  }
  printf("\nSum: %i\n", sum);
}
