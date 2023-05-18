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
    lli w, h;
    cin >> w >> h;
    if (w == h) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}