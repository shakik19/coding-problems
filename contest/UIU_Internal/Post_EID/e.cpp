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
  int ans = imx;
  while (t--) {
    int s, e;
    cin >> s >> e;
    ans = min(ans, (e - s));
  }
  ANS;
}