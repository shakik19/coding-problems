//! Bismillah

/*
Problem Source -> https://codeforces.com/contest/1833/problem/B
*/

#include "bits/stdc++.h"
using namespace std;

#define lli long long int

void solve() {
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> a(n);
  vector<int> b(n), ans(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i].first;
    a[i].second = i;
  }
  for (int &i : b) cin >> i;

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  for (int i = 0; i < n; i++) {
    ans[a[i].second] = b[i];
  }
  for (int &i : ans) cout << i << " ";
  cout << "\n";
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