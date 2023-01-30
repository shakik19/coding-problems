#include <stdbool.h>
#include <stdio.h>
int main() {
  // Taking Target
  int x;
  scanf("%i", &x);
  // First guess
  int n1;
  scanf("%i", &n1);
  if (x == n1) {
    printf("Right, Player-2 wins!\n");
    return 0;
  } else {
    printf("Wrong, 2 Chance(s) Left!\n");
  }
  // second guess
  int n2;
  scanf("%i", &n2);
  if (x == n2) {
    printf("Right, Player-2 wins!\n");
    return 0;
  } else {
    printf("Wrong, 1 Chance(s) Left!\n");
  }
  // third guess
  int n3;
  scanf("%i", &n3);
  if (x == n3) {
    printf("Right, Player-2 wins!\n");
  } else {
    printf("Wrong, 0 Chance(s) Left!\n");
    printf("Player-1 wins!\n");
  }
}