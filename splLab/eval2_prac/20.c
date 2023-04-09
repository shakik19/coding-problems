#include <stdio.h>

int isPrime(int n) {
  if (n <= 1) {
    return 0;
  }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int genNthPrime(int n) {
  int count = 0, num = 2;
  while (count < n) {
    if (isPrime(num)) {
      count++;
    }
    num++;
  }
  return num - 1;
}

int main() {
  int n, prime;
  printf("Enter the value of N: ");
  scanf("%d", &n);
  prime = genNthPrime(n);
  printf("%dth Prime: %d", n, prime);
  return 0;
}
