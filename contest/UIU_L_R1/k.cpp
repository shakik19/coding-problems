#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, even, odd;
    cin >> n >> even >> odd;
    if (n == 1) {
      cout << odd << endl;
    } else {
      int common = (int)(n / 2), ans;
      if (n % 2 == 1) {
        ans = common * (even + odd) + odd;
        cout << ans << endl;
      } else {
        ans = common * (even + odd);
        cout << ans << endl;
      }
    }
  }
}