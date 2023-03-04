#include "ctype.h"
#include "stdbool.h"
#include "stdio.h"

int main() {
  //   int n;
  //   scanf("%i", &n);
  //   int arr[n];
  int eCount = 0, oCount = 0;
  for (int i = 0; i < 100; i++) {
    int num;
    scanf("%i", &num);
    if (num % 2 == 0) {
      eCount++;
    } else {
      oCount++;
    }
  }
  printf("Even:  %i\nOdd: %i\n", eCount, oCount);
}