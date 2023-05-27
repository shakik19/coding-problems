//! Bismillah
#include "bits/stdc++.h"
using namespace std;

#define lli long long int

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int l, b;
    cin >> l >> b;
    cout << (l / __gcd(l, b)) * (b / __gcd(l, b)) << "\n";
    // cout << "GCD: " << __gcd(b, l) << " LCM: " << lcm(b, l) << "\n";
  }
}