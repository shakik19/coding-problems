//! Bismillah

/*
? Problem Source -> https://codeforces.com/contest/1851/problem/A
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

void solve() {
  int n, m, k, H;
  cin >> n >> m >> k >> H;
  vector<int> peoples(n);
  for (int i = 0; i < n; i++) cin >> peoples[i];
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (peoples[i] + H >= m * k) count++;
  }
  cout << count << "\n";
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
