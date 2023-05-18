//! Bismillah
#include "bits/stdc++.h"
using namespace std;

#define lli long long int
#define imx INT_MAX
#define imn INT_MIN
#define vi std::vector<int>
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define ANS cout << ans << "\n"

void solve() {
  string s = "codeforces";
  string ss;
  cin >> ss;
  int count = 0;
  for (int i = 0; i < 10; i++) {
    if (ss[i] != s[i]) count++;
  }
  cout << count << endl;
  return;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}