#include <stdio.h>

void compareNumbers(int num1, int num2) {
  if (num1 > num2) {
    printf("%d is greater than %d\n", num1, num2);
  } else if (num1 < num2) {
    printf("%d is less than %d\n", num1, num2);
  } else {
    printf("%d is equal to %d\n", num1, num2);
  }
}

int main() {
  int num1, num2;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);
  compareNumbers(num1, num2);
  return 0;
}
