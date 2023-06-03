//! Bismillah

/*
Problem Source -> https://codeforces.com/contest/1800/problem/B
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
  int lower[26] = {0}, upper[26] = {0};
  for (int i = 0; i < n; i++) {
    if (isupper(s[i]))
      upper[s[i] - 'A']++;
    else
      lower[s[i] - 'a']++;
  }
  int burls = 0, ps = 0;
  for (int i = 0; i < 26; i++) {
    if (lower[i] > upper[i]) {
      burls += upper[i];
      lower[i] -= upper[i];
      if (lower[i] / 2 != 0) {
        ps += lower[i] / 2;
      }
    } else {
      burls += lower[i];
      upper[i] -= lower[i];
      if (upper[i] / 2 != 0) {
        ps += upper[i] / 2;
      }
    }
  }
  if (ps >= k)
    burls += k;
  else if (ps < k)
    burls += ps;
  cout << burls << "\n";
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
