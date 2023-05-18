//! Bismillah
#include "bits/stdc++.h"
using namespace std;

#define lli long long int
#define imx INT_MAX
#define imn INT_MIN
#define vi std::vector<int>
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define ANS cout << ans << endl

void solve() {
  int n;
  cin >> n;
  vi arr(n);
  lli sum = 0, nthSum = 0;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    sum += arr[i];
    nthSum += i;
    if (sum < nthSum) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}