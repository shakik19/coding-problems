#include "bits/stdc++.h"
using namespace std;

#define lli long long int
#define imx INT_MAX
#define imn INT_MIN
#define vi std::vector<int>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
int main() {
  int n;
  cin >> n;
  lli arr[n][n];
  int ans1 = 0, ans2 = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  //! Time
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j == n - 1 - i) {
        ans1 += arr[i][j];
      }
      if (i == j) {
        ans2 += arr[i][j];
      }
    }
  }
  int ans = max(ans1, ans2);
  cout << ans << endl;
}
//! n = 2
//! 0     0 1
//! 1     3 3
//! 2