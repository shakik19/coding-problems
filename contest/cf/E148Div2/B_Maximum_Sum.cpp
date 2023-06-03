//! Bismillah

/*
? Problem Source -> https://codeforces.com/contest/1832/problem/B
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<llu> v(n), pf(n + 1);
  pf[0] = 0;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < n; i++) {
    pf[i + 1] = pf[i] + v[i];
  }
  llu ans = 0;
  for (int i = 0; i <= k; i++) {
    ans = max(ans, pf[n - i] - pf[2 * (k - i)]);
  }
  cout << ans << "\n";
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