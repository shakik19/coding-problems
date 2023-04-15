//! Bismillah
#include "bits/stdc++.h"
using namespace std;

#define lli long long int
#define imx INT_MAX
#define imn INT_MIN
#define vi std::vector<int>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define ANS cout << ans << endl

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    int till = (int)(sqrt(max(a, b)));
    // cout << till << endl;
    int ans = a + b;
    for (int i = 0; i <= till; i++) {
      int moves =
          (int)((a / i) + (b / i) + (i - 1) + (a - (a * i)) + (b - (b * i)));
      ans = min(ans, moves);
    }
    cout << ans << endl;
  }
}