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
  int n;
  cin >> n;
  int num;
  int ans = 0;
  int blank = 0;
  for (int i = 0; i < n; i++) {
    cin >> num;
    if (num == 0)
      blank++;
    else {
      ans = max(ans, blank);
      blank = 0;
    }
  }
  ans = max(ans, blank);
  cout << ans << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}