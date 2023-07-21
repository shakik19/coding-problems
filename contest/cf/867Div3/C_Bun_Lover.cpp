//! Bismillah

/*
? Problem Source -> https://codeforces.com/contest/1822/problem/C
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

void solve() {
  lls n;
  cin >> n;
  cout << n * n + 2 * (n + 1) << "\n";
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
