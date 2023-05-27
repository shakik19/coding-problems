//! Bismillah

/*
Problem Source -> https://codeforces.com/contest/1837/problem/B
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int count = 1, mx = 1;
  for (int i = 1; i < n; i++) {
    if (s[i - 1] == s[i]) {
      count++;
    } else {
      mx = max(mx, count);
      count = 1;
    }
  }
  mx = max(mx, count);
  cout << mx + 1 << "\n";
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