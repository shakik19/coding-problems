//! Bismillah

/*
Problem Source -> https://codeforces.com/contest/1779/problem/B
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

void solve() {
  int n;
  cin >> n;
  if (n & 1 && n < 5) {
    cout << "NO\n";
  } else if (n & 1) {
    cout << "YES\n";
    for (int i = 0; i < n; i++) {
      int k = (n - 1) / 2;
      if (i & 1) {
        cout << -k << " ";
      } else {
        cout << k - 1 << " ";
      }
    }
    cout << "\n";
  } else {
    cout << "YES\n";
    for (int i = 0; i < n / 2; i++) {
      cout << 19 << " " << -19 << " ";
    }
    cout << "\n";
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
