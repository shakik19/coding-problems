//! Bismillah

/*
? Problem Source -> https://codeforces.com/gym/100685/problem/C
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

void solve() {
  // From here
  int n;
  cin >> n;
  int sum = 0;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    sum += v[i];
  }
  int tgt = sum / n, ans = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] > tgt) ans++;
  }
  cout << ans << "\n";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  solve();
}
