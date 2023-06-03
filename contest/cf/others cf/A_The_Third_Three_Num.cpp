//! Bismillah

/*
Problem Source -> https://codeforces.com/contest/1699/problem/A
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

void solve() {
  // From here
  int n;
  cin >> n;
  if (n & 1) {
    cout << -1 << "\n";
  } else {
    cout << n / 2 << " " << n / 2 << " " << 0 << "\n";
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
