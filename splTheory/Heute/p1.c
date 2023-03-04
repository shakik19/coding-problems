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
<<<<<<< HEAD
  printf("Even:  %i\nOdd: %i\n", eCount, oCount);
=======
  printf("Even: %i\nOdd: %i\n", eCount, oCount);
>>>>>>> a0ec6b32eaa882136bdf3a08a3c394555e2d8e19
}