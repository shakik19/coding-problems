#include <stdio.h>

int sumOfNumbers(int n, int arr[]) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  return sum;
}

int main() {
  int n, sum;
  printf("Enter the number of values to be summed: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the values:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  sum = sumOfNumbers(n, arr);
  printf("Sum In Function: %d\n", sum);
  printf("Sum In Main: %d\n", sum);
  return 0;
}
