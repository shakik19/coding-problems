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
    int n;
    cin >> n;
    ll arr[n];
    int ans = 21, sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      sum += arr[i];
    }
    if (sum % 2 != 0) {
      for (int i = 0; i < n; i++) {
        cin >> arr[i];
        int an = 0;
        if (arr[i] % 2 == 0) {
          while ((arr[i] % 2) != 1) {
            an++;
            arr[i] /= 2;
          }
          ans = min(ans, an);
        } else {
          while ((arr[i] % 2) != 0) {
            an++;
            arr[i] /= 2;
          }
          ans = min(ans, an);
        }
      }
      cout << ans << endl;
    } else {
      cout << 0 << endl;
    }
  }
}