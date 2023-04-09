#include <stdio.h>

void swap(int x, int y) {
  int temp = x;
  x = y;
  y = temp;
  printf("Value in func: %d %d\n", x, y);
}

int main() {
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  printf("Value in main: %d %d\n", a, b);
  swap(a, b);
  printf("Value in main: %d %d\n", a, b);
  return 0;
}
