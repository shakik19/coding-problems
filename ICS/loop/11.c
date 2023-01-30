#include <stdio.h>
void alter(int n);
int main() {
  int prev = 0, pres = 1, n;
  scanf("%i", &n);
  if (n == 1) {
    printf("1");
    return 0;
  } else {
    printf("1, ");
  }
  for (int i = 1; i <= n - 1; i++) {
    int sum = prev + pres;
    prev = pres;
    pres = sum;
    (i != n - 1) ? printf("%i, ", sum) : printf("%i", sum);
  }
  printf("\n");
}
void alter(int n) {
  int series[n];
  series[n] = {0};
}