#include "stdio.h"
void fibonacci(int f, int s, int n) {
  if (n == 0) {
    printf("\n");
    return;
  } else {
    printf("%i", s);
    if (n != 1) printf(", ");
    fibonacci(s, s + f, --n);
  }
}
int main() {
  int n;
  scanf("%i", &n);
  fibonacci(0, 1, n);
}