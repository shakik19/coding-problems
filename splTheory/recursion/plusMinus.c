#include "stdio.h"

void wrapper(int s, int n, int sign) {
  if (n == 0) {
    printf("\n");
    return;
  } else {
    if (sign == 1 && s != 1)
      printf("+");
    else if (sign == -1)
      printf("-");
    printf("%i", s);
    wrapper((s + 2), --n, sign * (-1));
  }
}

void plusMinus(int n) { wrapper(1, n, 1); }

int main() {
  int n;
  scanf("%i", &n);
  plusMinus(n);
}

/*
WAP that will print the following series,
n terms
1 - 3 + 5 - 7 + 9 - 11 + ....n
*/