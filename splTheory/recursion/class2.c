#include "stdio.h"

int func(int n) {
  if (n > 5) {
    printf("\n");
    return 0;
  } else {
    printf("%i\n", n);
    int k = func(++n);
    printf("%i\n", n);
    printf("%i\n", k);
    return (n - 1);
  }
}

int main() {
  //   int n;
  //   scanf("%i", &n);
  func(1);
}