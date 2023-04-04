#include <stdbool.h>
#include <stdio.h>

// bool palindrome_check(int temp, int i){

// }

int main(int argc, char *argv[]) {
  int st, en;
  int arr[1000];
  int count = 0;
  scanf("%i %i", &st, &en);
  for (int i = st; i <= en; i++) {
    int sq = 0, first, last;
    int temp = i;
    bool toggle = false;
    while (temp > 0) {
      int var = temp % 10;
      if (var % 2 == 1) sq += var * var;
      if (var < 10) first = var;
      if (temp == i) last = var;
      temp = temp / 10;
    }
    if ((sq % 3) == 0 && first == 1 && last == 2) {
      //   printf("Sq = %i frist = %i  last = %i\n", sq, first, last);
      toggle = true;
      arr[count] = i;
      count++;
    }
  }
  printf("%i: ", count);
  for (int i = 0; i < count; i++) {
    printf("%i", arr[i]);
    if (i != count - 1) {
      printf(", ");
    }
  }
  printf("\n");
}
