/*
WAP that will print the following series,
1 - 3 + 5 - 7 + 9 - 11 + ....n
*/
#include "stdio.h"
#include "stdlib.h"

void printing_till_n(int start, int n, int sign, int sum, int count) {
  if (count > n) {
    printf("\n");
    return;
  } else {
    if (start != 1 && count <= n) {
      if (sign > 0) {
        printf(" + ");
      } else {
        printf(" - ");
      }
    }
    printf("%i", start);
    sum += start * sign;
    count++;
    return printing_till_n(start + 2, n, -sign, sum, count);
  }
}

int main() {
  int n;
  scanf("%i", &n);
  printing_till_n(1, n, 1, 0, 0);
  // int sum = printing_till_n(1, n, 1, 0, 0);
  // printf("\nSum: %i\n", sum);
}