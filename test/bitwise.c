//! Bismillah
// #include "bits/stdc++.h"
// using namespace std;
#include "stdio.h"

int solve(int num) {
  while (num > 0) {
    int n = num % 10;
    if (n != 4 || n != 7) return 0;
    num /= 10;
  }
  return 1;
}

int main() {
  // ios_base::sync_with_stdio(0);
  // cin.tie(0), cout.tie(0);
  int a, b, count = 0;
  // cin >> a >> b;
  scanf("%i %i", &a, &b);
  for (int i = a; i <= b; i++) {
    if (solve(i) == 1) {
      // cout << i << endl;
      printf("%i\n", i);
      count++;
    }
  }
  if (count == 0) printf("-1\n");
}