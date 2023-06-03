//! Bismillah

/*
Problem Source -> https://codeforces.com/contest/1807/problem/D
*/

#include "bits/stdc++.h"
using namespace std;

typedef uint64_t llu;

void solve() {
  llu n, q;
  cin >> n >> q;
  vector<llu> p(n + 1);
  for (int i = 1; i <= n; i++) {
    llu x;
    cin >> x;
    p[i] = p[i - 1];
    p[i] += x;
  }
  while (q--) {
    int l, r, k;
    cin >> l >> r >> k;
    llu qsum = (r - l + 1) * k;
    llu asum = p[r] - p[l - 1];
    llu ans = p[n] - asum + qsum;
    if (ans & 1)
      cout << "YES\n";
    else
      cout << "NO\n";
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
