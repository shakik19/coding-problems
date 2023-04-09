#include "stdio.h"
int e;
void printing(int s) {
  if (s > e) {
    printf("\n");
    return;
  } else {
    printf("%i ", s);
    return printing(s + 1);
  }
}

int main() {
  int s, ee;
  printf("Enter Start and End point: ");
  scanf("%i %i", &s, &ee);
  e = ee;
  printing(s);
}