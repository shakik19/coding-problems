#include "bits/stdc++.h"
using namespace std;

#define pf printf
#define sf scanf
#define ll long long
#define ull unsigned long long

int main() {
  int rows, coef = 1, space, i, j;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  for (i = 0; i < rows; i++) {
    for (space = 1; space <= rows - i; space++) printf("  ");
    for (j = 0; j <= i; j++) {
      if (j == 0 || i == 0)
        coef = 1;
      else
        coef = coef * (i - j + 1) / j;
      printf("%4d", coef);
    }
<<<<<<< HEAD
    printf("\n ");
=======
    printf("\n");
>>>>>>> a0ec6b32eaa882136bdf3a08a3c394555e2d8e19
  }
  return 0;
}