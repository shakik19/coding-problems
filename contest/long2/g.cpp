//! Bismillah
#include "bits/stdc++.h"
using namespace std;

#define lli long long int
#define imx INT_MAX
#define imn INT_MIN
#define vi std::vector<int>
#define ANS cout << ans << endl

void solve() {
  uint64_t n, k;
  cin >> n >> k;
  for (int i = 0; i < 2; i++) {
    if (n - (i * k) >= 0 and (n - (k * i)) % 2 == 0) {
      cout << "YES" << endl;
      return;
    }
  }
  cout << "NO" << endl;
  return;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}