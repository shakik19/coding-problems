#include <stdio.h>

void checkNumber(int num) {
  if (num > 0) {
    printf("%d is positive\n", num);
  } else if (num < 0) {
    printf("%d is negative\n", num);
  } else {
    printf("%d is zero\n", num);
  }
}

int main() {
  int num;
  scanf("%d", &num);
  checkNumber(num);
  return 0;
}
