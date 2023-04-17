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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string x0 = "0", x1 = "1";
    int cnt0 = 0, cnt1 = 1;
    for (int i = 0; i < n - 1; i++) {
      if (s[i] != x0[i]) {
        cnt0++;
        x0 += "1";
      } else {
        x0 += "0";
      }
      if (s[i] != x1[i]) {
        cnt1++;
        x1 += "1";
      } else {
        x1 += "0";
      }
    }
    int ans = max(cnt0, cnt1);
    cout << ans << endl;
  }
}

//! 1011
//! 0110
//! 0000
//! 1111
//! 1000
//! 0111