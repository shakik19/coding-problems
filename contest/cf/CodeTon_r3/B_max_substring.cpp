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
    int len;
    cin >> len;
    string s;
    cin >> s;
    s[len] = '7';
    ll c0, c1;
    c0 = c1 = 0;
    for (int i = 0; i < len; i++) {
      c0 += s[i] == '0';
      c1 += s[i] == '1';
    }
    ll ans = 0, count = 1;
    for (int i = 1; i <= len; i++) {
      if (s[i] == s[i - 1]) {
        count++;
      } else {
        ans = max(ans, count * count);
        count = 1;
      }
    }
    cout << max(c0 * c1, ans) << endl;
  }
}