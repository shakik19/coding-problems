#include <stdio.h>

int main(int argc, char *argv[]) {
  float inp[2][2];
  float opt[2][2];
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      scanf("%f", &inp[i][j]);
    }
  }
  opt[0][0] = inp[1][1];
  opt[1][1] = inp[0][0];
  opt[1][0] = -inp[1][0];
  opt[0][1] = -inp[0][1];
  float divider = ((inp[0][0] * inp[1][1]) - (inp[0][1] * inp[1][0]));
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%0.1f ", (opt[i][j]) / divider);
    }
    printf("\n");
  }
}
