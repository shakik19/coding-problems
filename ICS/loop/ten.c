#include <stdio.h>
void main() {
  int n, sum = 0;
  scanf("%i", &n);
  for (int i = 1; i <= n; i++) {
    (n % 2 == 0) ? (sum += n * (-1)) : (sum += n);
  }
  printf("%i", sum);
}