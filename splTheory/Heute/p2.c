#include "stdio.h"
int count[1001][2];
int main() {
  int n;
  scanf("%i", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%i", &arr[i]);
    count[(arr[i])][0]++;
    count[(arr[i])][1] = arr[i];
  }
  int flag = 0;
  for (int i = 0; i < 1001; i++) {
    if (count[i][0] == 1) {
      printf("Number: %i\n", count[i][1]);
    }
  }
}