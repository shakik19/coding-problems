//! Bismillah

/*
? Problem Source -> https://codeforces.com/contest/1838/problem/A
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  if (v[0] < 0) {
    cout << v[0] << '\n';
    return;
  }
  cout << v[n - 1] << '\n';
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
