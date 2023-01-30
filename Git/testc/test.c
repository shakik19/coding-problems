#include <stdio.h>
int main() {
  int arr[] = {
      30, 6, 15, 7, 45,
  };
  int highest = 0, scndHighest = 0;
  int len = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < len - 1; i++) {
    if ((arr[i] > arr[i + 1] && arr[i] > highest)) {
      scndHighest = highest;
      highest = arr[i];
    } else if (arr[i] < arr[i + 1] && arr[i + 1] > highest) {
      scndHighest = highest;
      highest = arr[i + 1];
    }
    /*if (arr[i] != highest && arr[i] > scndHighest) {
      scndHighest = arr[i];
    } else if (arr[i + 1] > scndHighest && arr[i + 1] != highest) {
      scndHighest = arr[i + 1];
    }*/
  }
  printf("1st %i\n", highest);
  printf("2nd %i\n", scndHighest);
}