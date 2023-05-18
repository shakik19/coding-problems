#include "stdio.h"
int x = 78, y = 0, z = 156;
int first(int p, int q) {
  int x = ++p;
  return x + z;
}
void second(int w, int y) {
  y *= x;
  y -= w;
  printf("%i %i %i\n", x, y, z);
  x = first(y, z);
  printf("%i %i %i\n", x, y, z);
}
int main() {
  int x = 90;
  y = first(x, z);
  printf("%i %i %i\n", x, y, z);
  second(y, z);
  printf("%i %i %i\n", x, y, z);
}