//! Bismillah

/*
? Problem Source -> https://codeforces.com/contest/1832/problem/C
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  set<int> s;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    s.insert(v[i]);
  }
  int ans = s.size();
  cout << "UNQ " << ans << '\n';

  for (int i = 0; i + 2 < n; i++) {
    ans -= ((v[i] < v[i + 1]) && (v[i + 1] < v[i + 2]));
    ans -= ((v[i] > v[i + 1]) && (v[i + 1] > v[i + 2]));
  }
  cout << ans << "\n";
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
