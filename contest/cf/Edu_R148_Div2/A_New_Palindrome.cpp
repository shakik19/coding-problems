//! Bismillah
/*
https://codeforces.com/contest/1832/problem/A
*/
#include "bits/stdc++.h"
using namespace std;

void solve() {
  string s;
  cin >> s;
  int k = s.size() / 2 - 1;
  for (int i = 1; i <= k; i++) {
    if (s[i] != s[i - 1]) {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
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