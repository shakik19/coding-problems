#include "stdio.h"
#include "string.h"
typedef struct player {
  char name[30];
  char birth_date[30];
  int total_over;
  int total_run;
  float economy;
} PLAYER;
FILE *f;
PLAYER players[3];
void take_player_input(int n);
void update(int n);

int main() {
  f = fopen("entry.txt", "w");
  for (int i = 0; i < 3; i++) {
    take_player_input(i);
  }

  printf("NAME OF THE PLAYER YOU WANT TO UPDATE:");
  char nm[30];
  fgets(nm, sizeof(nm), stdin);
  //   nm[strcspn(nm, "\n")] = '\0';
  for (int i = 0; i < 2; i++) {
    if (strcmp(players[i].name, nm) == 0) {
      update(i);
    }
  }

  fclose(f);
}

void take_player_input(int n) {
  printf("||____NEW PLAYER ENTRY____||\n\n");
  printf("NAME: ");
  fgets(players[n].name, 30, stdin);
  fprintf(f, "%s", players[n].name);
  printf("BIRTH DATE: ");
  fgets(players[n].birth_date, 30, stdin);
  fprintf(f, "%s", players[n].birth_date);
  printf("TOTAL OVER: ");
  scanf("%i", &players[n].total_over);
  fprintf(f, "%i\n", players[n].total_over);
  printf("TOTAL RUN: ");
  scanf("%i", &players[n].total_run);
  getchar();
  fprintf(f, "%i\n", players[n].total_run);
  printf("\n||____ENTRY SUCCESSFUL____||\n");
}

void update(int n) {
  printf("\n||____PLAYER UPDATE____||\n");
  printf("NAME: ");
  fgets(players[n].name, 30, stdin);
  fprintf(f, "%s", players[n].name);

  printf("BIRTH DATE: ");
  fgets(players[n].birth_date, 30, stdin);
  fprintf(f, "%s", players[n].birth_date);

  printf("TOTAL OVER: ");
  scanf("%i", &players[n].total_over);
  fprintf(f, "%i\n", players[n].total_over);

  printf("TOTAL RUN: ");
  scanf("%i", &players[n].total_run);
  getchar();
  fprintf(f, "%i\n", players[n].total_run);

  printf("\n|____UPDATED____|\n");
  players[n].economy = (float)players[n].total_run / players[n].total_over;
}