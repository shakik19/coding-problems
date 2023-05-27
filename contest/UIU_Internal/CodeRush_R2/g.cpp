//! Bismillah
#include "bits/stdc++.h"
using namespace std;
void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  uint64_t ones = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '1') ones++;
  }
  uint64_t ans = ones * (ones + 1) / 2;
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