#include "stdio.h"

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  int n;
  scanf("%i", &n);
  while (n--) {
    int rad, sec;
    scanf("%i %i", &rad, &sec);
    if (rad >= sec) {
      printf("%i\n", sec);
    } else if (sec % rad == 0) {
      int ans = ((sec / rad) * (sec / rad)) * rad;
      printf("%i\n", ans);
    } else {
      int ans, cnt = 1;
      //? rad 2 sec 5
      //? ans 13 2,3
      for (int i = rad - 1; i > 0; i--) {
        if (i + 2 * cnt == sec) {
          ans = i + (2 * 2) * cnt;
        } else {
          cnt++;
        }
      }
      printf("%i\n", ans);
    }
  }
}