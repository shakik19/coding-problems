#include "stdio.h"

void print_fibonacchi(int first, int second, int n) {
  if (n == 0) {
    printf("\n");
    return;
  } else {
    printf("%i", second);
    if (n != 1) printf(", ");
    return print_fibonacchi(second, first + second, --n);
  }
}

int main() {
  int n;
  scanf("%i", &n);
  print_fibonacchi(0, 1, n);
}