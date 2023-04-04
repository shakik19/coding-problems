#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  scanf("%i", &n);
  int toggle = 0, mode = 1;
  int counter = 1;
  int dot = 0;
  int midn = (n + 1) / 2;
  for (int i = 1; i <= n; i++) {
    if (i <= midn) {
      for (int j = i; j >= 1; j--) {
        if (i <= midn) {
          printf("%i", counter);
        } else {
        }

        if (counter == n) {
          mode = 0;
        }
        if (counter == 1) {
          mode = 1;
        }
        if (mode) {
          counter++;
        } else {
          counter--;
        }
      }

    } else {
      dot++;
      for (int j = midn - dot; j >= 1; j--) {
        printf("%i", counter);
        if (counter == n) {
          mode = 0;
        }
        if (counter == 1) {
          mode = 1;
        }
        if (mode) {
          counter++;
        } else {
          counter--;
        }
      }
    }
    for (int j = 1; j <= dot; j++) {
      printf("#");
    }

    printf("\n");
  }
}
