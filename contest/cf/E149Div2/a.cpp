//! Bismillah

/*
Problem Source -> https://codeforces.com/contest/1837/problem/A
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

void solve() {
  int x, k;
  cin >> x >> k;

  if (x % k == 0) {
    cout << 2 << "\n" << x - 1 << " " << 1 << "\n";
  } else {
    cout << 1 << "\n" << x << "\n";
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
