//! Bismillah
#include "bits/stdc++.h"
using namespace std;

#define lli long long int

void solve() {
  string s;
  cin >> s;
  int match = 0;
  int n = s.size();
  int pairs = n * (n - 1) / 2;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (s[i] == s[j]) match++;
    }
  }
  // double ans = (double)match / pairs;
  cout << (double)match / 2 << "\n";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);

  solve();
}