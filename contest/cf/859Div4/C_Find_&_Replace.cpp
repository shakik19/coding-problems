//! Bismillah

/*
Problem Source -> https://codeforces.com/contest/1809/problem/C
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

void solve() {
  // From here
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<pair<char, int>> v(n);
  for (int i = 0; i < n; i++) {
    v[i].first = s[i];
    v[i].second = (i & 1) ? 1 : 0;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) continue;
      if (v[i].first == v[j].first) {
        if (v[i].second != v[j].second) {
          cout << "NO\n";
          return;
        }
      }
    }
  }
  cout << "YES\n";
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
