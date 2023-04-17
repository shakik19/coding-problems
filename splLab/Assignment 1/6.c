#include <stdio.h>

int sumOfNumbers(int n) {
  int sum = 0, num;
  for (int i = 1; i <= n; i++) {
    scanf("%d", &num);
    sum += num;
  }
  return sum;
}

int main() {
  int n, sum;
  printf("Enter the number of values to be summed: ");
  scanf("%d", &n);
  printf("Enter the values:\n");
  sum = sumOfNumbers(n);
  printf("Sum In Function: %d\n", sum);
  printf("Sum In Main: %d\n", sum);
  return 0;
}
