#include <stdio.h>

int even(int x) {
  if (x % 2 == 0) return x;
}

int main(void) {
  int n;
  while (1) {
    scanf("%d", &n);
    printf("%d ", even(n));
  }
}