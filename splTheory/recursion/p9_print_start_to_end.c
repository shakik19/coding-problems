#include "stdio.h"

void printing(int s, int e) {
  if (s > e) {
    printf("\n");
    return;
  } else {
    printf("%i ", s);
    return printing(s + 1, e);
  }
}

int main() {
  int s, e;
  printf("Enter Start and End point: ");
  scanf("%i %i", &s, &e);
  printing(s, e);
}