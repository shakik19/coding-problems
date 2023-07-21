//! Bismillah

/*
? Problem Source -> https://codeforces.com/contest/1840/problem/A
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

void solve() {
  int n;
  cin >> n;
  string s, ss = "";
  cin >> s;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (s[i] == s[j]) {
        ss += s[i];
        i = j;
        break;
      }
    }
  }
  cout << ss << "\n";
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
