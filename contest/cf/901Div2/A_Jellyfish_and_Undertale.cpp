//! Bismillah

/*
? Problem Source -> https://codeforces.com/contest/1875/problem/A
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

void solve() {
  int max, ini, n;
  cin >> max >> ini >> n;
  llu sum = 0;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    sum += min(max - 1, x);
  }
  cout << sum + ini << endl;
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
