//! Bismillah

/*
Problem Source -> https://codeforces.com/contest/1794/problem/A
*/

#include "bits/stdc++.h"
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<string> str;
  for (int i = 0; i < (2 * n) - 2; i++) {
    string s;
    cin >> s;
    if (s.size() == n - 1) {
      str.push_back(s);
    }
  }
  string ss = str[0];
  reverse(ss.begin(), ss.end());
  if (ss == str[1])
    cout << "YES\n";
  else
    cout << "NO\n";
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
