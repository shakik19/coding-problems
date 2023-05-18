#include "stdio.h"

typedef struct player {
  char name[30];
  int total_over;
  int total_run;
} PLAYER;

PLAYER ps[2];

void mod(PLAYER *ptr) {
  fgets(ptr->name, 30, stdin);
  scanf("%i", &ptr->total_run);
}

int main() {
  // start
  mod(&ps[0]);
  puts(ps[0].name);
  printf("%i\n", ps[0].total_run);
}