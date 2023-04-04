#include "stdio.h"

void test(int *p) {
  p += 1;
  p = p + 1;
}

int main() {
  int a = 19;
  int *p, **pp;
  p = &a;
  pp = &p;
  printf("%p\n", pp);
  printf("%p\n", &pp);
  printf("%p\n", &p);
  printf("%p\n", p);
  printf("%p\n", &a);
  printf("%i\n", **pp);
  printf("%i\n", *p);
  test(p);
  printf("%i\n", *p);
  printf("%p\n", *pp);
  printf("%p\n", &p);
}