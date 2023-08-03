//! Bismillah

/*
? Problem Source -> https://codeforces.com/contest/
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

void solve() {
  int b, c, h;
  cin >> b >> c >> h;
  if (c + h >= b) {
    cout << 2 * b - 1 << "\n";
    return;
  } else {
    cout << 2 * (c + h) + 1 << "\n";
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
