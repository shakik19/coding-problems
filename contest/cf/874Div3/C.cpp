//! Bismillah

/*
Problem Source -> https://codeforces.com/contest/1833/problem/C
*/

#include "bits/stdc++.h"
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> even, odd;
  int emin = INT32_MAX;
  int omin = emin;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x & 1) {
      odd.push_back(x);
      omin = (x < omin) ? x : omin;
    } else {
      even.push_back(x);
      emin = (x < emin) ? x : emin;
    }
  }
  if (odd.empty() or even.empty()) {
    cout << "YES\n";
    return;
  }
  if (omin < emin) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
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