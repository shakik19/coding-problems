//! Bismillah

/*
Problem Source -> https://codeforces.com/contest/1779/problem/A
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int index = 0;
  for (int i = 1; i < n; i++) {
    if (s[i - 1] == 'R' && s[i] == 'L') {
      cout << 0 << "\n";
      return;
    } else if (s[i - 1] == 'L' && s[i] == 'R') {
      index = i;
    }
  }
  cout << ((!index) ? -1 : index) << "\n";
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
