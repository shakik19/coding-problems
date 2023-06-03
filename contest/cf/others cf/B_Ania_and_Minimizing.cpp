//! Bismillah

/*
Problem Source -> https://codeforces.com/contest/
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

void solve() {
  // From here
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  if (s[0] != '1') {
    k--;
    s[0] = '1';
  }
  for (int i = 1; i < n; i++) {
    if (s[i] != '0' and k > 0) {
      s[i] = '0';
      --k;
    }
    if (k == 0) break;
  }
  cout << s << "\n";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  solve();
}
