#include "stdio.h"
#include "unistd.h"
int func(int n) {
  if (n == 0) {
    printf("%i\n", n);
    return n;
  } else {
    // printf("%i\n", n);
    func(--n);
  }
  sleep(2);
  printf("After 0?\n");
  return 1;
}
int main() { printf("%i\n", func(5) + 10); }