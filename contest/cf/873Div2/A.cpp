//! Bismillah
#include "bits/stdc++.h"
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n, 0);
    int nn = n, sum = 0;
    int j = n;
    // while (nn != 0) {
    //   //   cout << nn << endl;
    //   if (j % nn == 0) {
    //     a[nn - 1] = j;
    //     sum += j;
    //     --nn;
    //     j = 2 * n;
    //   } else {
    //     j--;
    //   }
    // }
    for (int i = 1; i < n; i++) {
      a[i] = i + 1;
      sum += a[i];
    }

    for (int i = 1; i <= n; i++) {
      if ((sum + i) % n == 0) {
        a[0] = i;
        sum += i;
        break;
      }
    }

    for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }
    cout << endl;
    // cout << sum << endl;
  }
}