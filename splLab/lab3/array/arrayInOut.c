#include <stdio.h>
#define pf printf
#define sf scanf
#define ll long long
#define ull unsigned long long

int main() {
  int row, col;
  scanf("%i %i", &row, &col);
  ll arr[row][col];
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      scanf("%lli", &arr[i][j]);
    }
  }
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      pf("%3lli ", arr[i][j]);
    }
    printf("\n");
  }
}