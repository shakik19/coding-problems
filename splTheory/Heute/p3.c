#include "stdio.h"

#define mx __INT_MAX__
#define mn -(__INT_MAX__)

int main() {
  int n;
  scanf("%i", &n);
  int arr[n][3];
  for (int i = 0; i < n; i++) {
    /* code */
    scanf("%i %i", &arr[i][0], &arr[i][1]);
    arr[i][2] = arr[i][0] + arr[i][1];
  }
  printf("Total salaries: ");
  for (int i = 0; i < n; i++) {
    printf("%i ", (arr[i][2]));
  }
  printf("\n");
}