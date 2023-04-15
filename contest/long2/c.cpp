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
  lli n;
  cin >> n;
  lli nn = n;
  int len = (int)log10(n) + 1;
  n = (int)(n / pow(10, len - 1));
  lli ans = 0;
  for (int i = 0; i < len; i++) {
    ans = ans * 10 + n;
  }
  //   cout << ans << endl;
  if (ans < nn) {
    // cout << "check" << endl;
    ans = 0, n += 1;
    for (int i = 0; i < len; i++) {
      ans = ans * 10 + n;
    }
  }
  cout << ans << "\n";
}