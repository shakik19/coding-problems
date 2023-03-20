#include "bits/stdc++.h"
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, q, s = 0;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      s += v[i];
    }
    while (q--) {
      int l, r, k;
      cin >> l >> r >> k;
      int sum = (r - l + 1) * k;
      int sum2 = 0;
      for (int i = l - 1; i < r; i++) {
        sum2 += v[i];
      }
      if ((s - sum2 + sum) % 2 == 1)
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    }
  }
}