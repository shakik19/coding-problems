//! Bismillah

/*
Problem Source -> https://codeforces.com/contest/1831/problem/A
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

void solve() {
  // From here
  int n;
  cin >> n;
  vector<int> iperm(n);
  for (int &i : iperm) cin >> i;
  for (int i = 0; i < n; i++) {
    cout << n - iperm[i] + 1 << " ";
  }
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
