// Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n, q;
    cin >> n >> q;
    ll a[n + 1];
    a[0] = 0;
    for (ll i = 1; i <= n; i++) {
      cin >> a[i];
      a[i] += a[i - 1];
    }
    while (q--) {
      ll l, r, k;
      cin >> l >> r >> k;
      ll x = (r - l + 1) * k;
      ll t = a[n] - (a[r] - a[l - 1]) + x;
      // cout << "(a[r] - a[l - 1]):  " << (a[r] - a[l - 1]) << endl;
      cout << a[l - 1] << endl;
      // if (t % 2 == 1) {
      //   cout << "YES" << endl;
      // } else {
      //   cout << "NO" << endl;
      // }
    }
  }
}