#include "bits/stdc++.h"
using namespace std;
int main() {
  int n = 3, i, j, sum = 0;
  for (i = 0; i < n; i++) {
    for (j = 0; j <= i; j++) {
      if (i == j)
        sum += i + j;
      else if (i > j)
        sum += i + n;
      else
        sum += n - j;
    }
  }
  cout << "inin " << sum << endl;
  j = 0, j = 0;
  sum = 0;
  do {
    do {
      if (i == j)
        sum += i + j;
      else if (i > j)
        sum += i + n;
      else
        sum += n - j;
      j++;
    } while (j <= i);
    i++;
  } while (i < n);
  cout << "2nd: " << sum << endl;
}