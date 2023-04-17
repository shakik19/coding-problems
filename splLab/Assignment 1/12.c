#include <stdio.h>

void swap(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
  printf("Value in func: %d %d\n", a, b);
}

int main() {
  int x = 10, y = 20;
  printf("Value in main: %d %d\n", x, y);
  swap(x, y);
  printf("Value in main: %d %d\n", x, y);
  return 0;
}
