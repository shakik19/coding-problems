#include "stdio.h"

int get_number_and_base(int *number, int *base) {
  scanf("%i %i", &*number, &*base);
  if (*base >= 2 && *base <= 16)
    return 0;
  else
    return 1;
}

int main() {
  int number, base;
  if (get_number_and_base(&number, &base)) {
    printf("Base not within proper range!\n");
    return 0;
  }
}