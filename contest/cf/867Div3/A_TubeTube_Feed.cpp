//! Bismillah

/*
? Problem Source -> https://codeforces.com/contest/1822/problem/A
*/

#include "bits/stdc++.h"
using namespace std;

void solve() {
  int n, t;
  cin >> n >> t;
  vector<int> c(n), v(n);
  for (int i = 0; i < n; i++) cin >> c[i];
  for (int i = 0; i < n; i++) cin >> v[i];
  int ansi = -1, index = 0;
  for (int i = 0; i < n; i++) {
    if (c[i] <= t--) {
      if (v[i] > ansi) {
        ansi = v[i];
        index = i + 1;
      }
    }
  }
  cout << ((index > 0) ? index : -1) << "\n";
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
