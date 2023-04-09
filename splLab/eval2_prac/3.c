#include "stdio.h"
int type(int a) {
  if (a % 2 == 0)
    return 1;
  else
    return -1;
}
int main() {
  // start
  int n;
  scanf("%i", &n);
  if (type(n)) {
    printf("even\n");
  } else {
    printf("odd\n");
  }
}