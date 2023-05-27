//! Bismillah
#include "bits/stdc++.h"
using namespace std;

void solve() {
  string s, t;

  cin >> s >> t;

  int len = s.size();
  int ub = -1, ue = -1;
  for (int i = 0; i < len; i++) {
    if (s[i] != t[i]) {
      ub = i;
      break;
    }
  }
  for (int i = len - 1; i > -1; i--) {
    if (s[i] != t[i]) {
      ue = i;
      break;
    }
  }
  string ss = "";
  string tt = "";
  for (int i = ub; i <= ue; i++) {
    ss += s[i];
    tt += t[i];
  }
  reverse(tt.begin(), tt.end());
  if (ss == tt)
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  solve();
}