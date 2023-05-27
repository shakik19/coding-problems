//! Bismillah
#include "bits/stdc++.h"
using namespace std;
typedef long long int lli;
void solve() {
  int n;
  cin >> n;
  vector<lli> arr(n);
  for (lli i = 0; i < n; i++) cin >> arr[i];
  lli count = 1, ans = 0;
  for (lli i = 1; i < n; i++) {
    if (arr[i - 1] <= arr[i]) {
      count++;
    } else {
      ans += (count * (count + 1)) / 2;
      count = 1;
    }
  }
  ans += (count * (count + 1)) / 2;
  cout << ans << "\n";
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